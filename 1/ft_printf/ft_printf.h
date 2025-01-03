/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:15:23 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/11/21 15:00:33 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf_bigx(unsigned int n);
int		ft_printf_c(char c);
int		ft_printf_d(int n);
int		ft_printf_i(int n);
int		ft_printf_p(size_t n);
int		ft_printf_percent(void);
int		ft_printf_s(char *str);
int		ft_printf_u(unsigned int n);
int		ft_printf_x(unsigned int n);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
int		ft_printf(const char *to_print, ...);

#endif