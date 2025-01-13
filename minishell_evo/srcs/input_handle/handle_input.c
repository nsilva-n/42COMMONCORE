/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:11:52 by mariocos          #+#    #+#             */
/*   Updated: 2025/01/06 12:06:37 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	finish_input(char *new_input)
{
	if (!new_input)
		return ;
	free(new_input);
	mini_call()->input = NULL;
}

int	input_handle(void)
{
	if (!parse_quotes(mini_call()->input))
	{
		syntax_error();
		return (-1);
	}
	mini_call()->token
	= input_split_to_token(special_split(mini_call()->input));
	if (!mini_call()->token)
		return (-1);
	mini_call()->token = re_tokenize(mini_call()->token);
	expand_vars_loop(mini_call()->token);
	tilde_loop(mini_call()->token);
	if (!first_parse(mini_call()->token))
		return (-1);
	tokens_to_pipex(mini_call()->token);
	remove_pipex_quotes(mini_call()->pipex_list);
	finish_input(mini_call()->input);
	return (1);
}
