/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:32:04 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/11/21 13:39:11 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *str)
{
	int	i;

	i = -1;
	if (str == NULL)
		return (ft_printf_s("(null)"));
	while (str[++i])
		ft_printf_c(str[i]);
	return ((int)ft_strlen(str));
}
