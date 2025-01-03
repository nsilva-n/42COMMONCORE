/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:45:47 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/11/20 17:52:07 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_u(unsigned int n)
{
	if (n > 9)
	{
		ft_put_u(n / 10);
		ft_put_u(n % 10);
	}
	else
		ft_printf_c(n + '0');
}

int	ft_printf_u(unsigned int n)
{
	int	len;

	len = 0;
	ft_put_u(n);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
