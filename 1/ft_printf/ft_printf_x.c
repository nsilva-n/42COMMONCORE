/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:47:15 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/11/21 13:44:16 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_x(unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
	{
		ft_put_x(n / 16);
		ft_put_x(n % 16);
	}
	else
		ft_printf_c(base[n]);
}

int	ft_printf_x(unsigned int n)
{
	int	len;

	len = 0;
	ft_put_x(n);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}
