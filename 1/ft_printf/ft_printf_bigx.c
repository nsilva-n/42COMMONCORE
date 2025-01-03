/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bigx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:47:15 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/11/21 13:44:21 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_bigx(unsigned int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_put_bigx(n / 16);
		ft_put_bigx(n % 16);
	}
	else
		ft_printf_c(base[n]);
}

int	ft_printf_bigx(unsigned int n)
{
	int	len;

	len = 0;
	ft_put_bigx(n);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}
