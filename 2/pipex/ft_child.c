/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_child.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:35:29 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/30 16:39:13 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_child(char **av, int *p_fd, char **env)
{
	int	fd;

	fd = open(av[1], O_RDONLY, 0644);
	if (fd == -1)
		exit(EXIT_FAILURE);
	dup2(fd, STDIN_FILENO);
	dup2(p_fd[1], STDOUT_FILENO);
	close(p_fd[0]);
	ft_execute(av[2], env);
}
