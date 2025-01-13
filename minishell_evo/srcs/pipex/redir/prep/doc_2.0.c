/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doc_2.0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:45:07 by mariocos          #+#    #+#             */
/*   Updated: 2025/01/07 14:49:18 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../minishell.h"

static void	ctrl_d_msg_and_exit(char *help, char *eof, t_pipex *p)
{
	if (help != NULL)
		free(help);
	if_close(p->doc_pipe[1]);
	print_ctrl_d_msg(eof);
	exit(144);
}

static void	process_input_and_write_to_pipe(char *help, int fd)
{
	char	*str;

	str = NULL;
	if (!help)
		return ;
	if (*help)
		help = here_doc_expand(help);
	str = ft_strjoin(help, "\n");
	write(fd, str, ft_strlen(str));
	free(help);
	free(str);
}

static void	read_into_doc(char *eof, t_pipex *p)
{
	char	*help;

	signal(SIGINT, SIG_DFL);
	if_close(p->doc_pipe[0]);
	while (1)
	{
		help = readline("> ");
		if (help == NULL)
			ctrl_d_msg_and_exit(help, eof, p);
		if (!ft_strcmp(help, eof))
		{
			free(help);
			break ;
		}
		process_input_and_write_to_pipe(help, p->doc_pipe[1]);
	}
	if_close(p->doc_pipe[1]);
	exit(0);
}

static int	open_doc(char *str, t_pipex *p)
{
	int	pid;

	if_close(p->doc_pipe[0]);
	if (pipe(p->doc_pipe) < 0)
		return (pipe_error());
	pid = fork();
	if (pid < 0)
	{
		close_fds(p->doc_pipe);
		return (fork_error());
	}
	if (pid == 0)
		read_into_doc(str, p);
	set_parent_signals();
	if_close(p->doc_pipe[1]);
	ft_waitpid(pid);
	set_main_signals();
	if (mini_call()->exit_status == 130)
		return (-1);
	if (mini_call()->exit_status == 144)
	{
		p->bad_command = true;
		mini_call()->exit_status = 0;
	}
	return (1);
}

int	do_docs_loop(t_pipex *p)
{
	int	i;

	i = 0;
	while (p->red_in && p->red_in[i] != NULL && !p->bad_command)
	{
		if (!ft_strncmp(p->red_in[i], "APP:", 4))
		{
			if (open_doc(p->red_in[i] + 4, p) < 0)
			{
				if_close(p->doc_pipe[0]);
				return (-1);
			}
		}
		i++;
	}
	if (!p->has_doc)
		if_close(p->doc_pipe[0]);
	return (1);
}
