/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:37:20 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/30 16:44:22 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_execute(char *cmd, char **env)
{
	char	**s_cmd;
	char	*path;

	s_cmd = ft_split(cmd, ' ');
	if (!s_cmd)
		exit((ft_printf_fd(2, "Split error") * 0) + EXIT_FAILURE);
	path = ft_get_path(cmd, env);
	if (execve(path, s_cmd, env) == -1)
	{
		ft_printf_fd(2, "command not found: %s\n", cmd);
		ft_free_split(s_cmd);
		exit(127);
	}
}
