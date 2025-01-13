/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:44:42 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 15:05:12 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_error_list(int errnumb)
{
	if (errnumb == 1)
		return ("Check arguments - less than 2");
	else if (errnumb == 2)
		return ("There are two or more equal numbers");
	else if (errnumb == 3)
		return ("Check signals - Plus and minus consecutively placed");
	else if (errnumb == 4)
		return ("Invalid quotes");
	else if (errnumb == 5)
		return ("Stack is null");
	else if (errnumb == 6)
		return ("Expected number");
	else if (errnumb == 7)
		return ("Not a digit");
	else if (errnumb == 8)
		return ("Over INT_MAX or Under INT_MIN");
}
