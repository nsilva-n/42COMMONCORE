/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:14:35 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/11/21 16:51:29 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if ((char)c == 0)
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

static int	ft_print_triage(const char *to_print, va_list lst)
{
	int	len;

	len = 0;
	if (to_print[1] == 'c')
		len += ft_printf_c(va_arg(lst, int));
	else if (to_print[1] == 'd')
		len += ft_printf_d(va_arg(lst, int));
	else if (to_print[1] == 'i')
		len += ft_printf_i(va_arg(lst, int));
	else if (to_print[1] == 'p')
		len += ft_printf_p(va_arg(lst, size_t));
	else if (to_print[1] == '%')
		len += ft_printf_percent();
	else if (to_print[1] == 's')
		len += ft_printf_s(va_arg(lst, char *));
	else if (to_print[1] == 'u')
		len += ft_printf_u(va_arg(lst, unsigned int));
	else if (to_print[1] == 'x')
		len += ft_printf_x(va_arg(lst, unsigned int));
	else if (to_print[1] == 'X')
		len += ft_printf_bigx(va_arg(lst, unsigned int));
	return (len);
}

int	ft_printf(const char *to_print, ...)
{
	va_list	lst;
	int		len;

	len = 0;
	if (!to_print)
		return (-1);
	va_start(lst, to_print);
	while (*to_print)
	{
		if (*to_print == '%' && ft_strchr("cspdiuxX%", to_print[1]))
			len += ft_print_triage(to_print++, lst);
		else
			len += ft_printf_c(to_print[0]);
		to_print++;
	}
	va_end(lst);
	return (len);
}
