/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_tokenize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:37:04 by mariocos          #+#    #+#             */
/*   Updated: 2024/12/05 17:39:20 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/*
	tokens have already been created and separated by spaces,
now the words and operators need to be separated
*/
t_token	*re_tokenize(t_token *start)
{
	t_token	*step;

	step = start;
	while (step->next != NULL || needs_retoken(step->token))
	{
		if (needs_retoken(step->token))
			step = token_reasign(step);
		else
			step = step->next;
	}
	while (step->previous != NULL)
	{
		step = step->previous;
	}
	return (step);
}

/*
checks the need for retokenizing,
if there are operators and words in the same token they need to be separated,
if there are multiple operators in the same token they need to be separated,
e.g.
returns (true) for: [token>>] [>>|] [>>test] [||]
returns (false) for: [token] [>>] [|] [<]
*/
bool	needs_retoken(char *str)
{
	int		i;
	bool	has_op;
	bool	has_words;

	i = 0;
	has_op = false;
	has_words = false;
	while (str[i] != '\0')
	{
		if (ft_isoperator(str, i) && !in_quote(str, i))
			has_op = true;
		else
			has_words = true;
		i++;
	}
	if (has_op && has_words)
		return (true);
	else if (ft_isoperator(str, 0) < (int)ft_strlen(str) && has_op)
		return (true);
	return (false);
}

/*
	Receives a token that needs_retoken and
identifies if it starts with a operator or word 
and promptly extracts it using
the extract_word and extract_operator functions.
*/
t_token	*token_separate(t_token *token)
{
	t_token	*new_first;

	if (ft_isoperator(token->token, 0) < (int)ft_strlen(token->token)
		&& ft_isoperator(token->token, 0) > 0)
	{
		new_first = extract_operator(token);
	}
	else
	{
		new_first = extract_word(token);
	}
	return (new_first);
}

/*
Reasigns the new retokenized token received from the token_separate funciton
in place of the previous one.
Freeing it after ensuring the double linked list pointers are set correctly.
e.g. [a]<->[b>]<->[c] into [a]<->[b]<->[>]<->[c].
*/
t_token	*token_reasign(t_token *t)
{
	t_token	*new;

	new = token_separate(t);
	new->next->next = t->next;
	if (t->previous)
		t->previous->next = new;
	new->previous = t->previous;
	if (t->next)
		t->next->previous = new->next;
	free_token(t);
	return (new);
}
