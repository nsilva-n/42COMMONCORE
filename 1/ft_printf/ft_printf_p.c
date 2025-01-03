/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:42:52 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/11/21 15:01:47 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_p(size_t n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
	{
		ft_put_p(n / 16);
		ft_put_p(n % 16);
	}
	else
		ft_printf_c(base[n]);
}

int	ft_printf_p(size_t n)
{
	int	len;

	len = 2;
	if (!n)
		return (ft_printf_s("(nil)"));
	ft_printf_c('0');
	ft_printf_c('x');
	ft_put_p(n);
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}
