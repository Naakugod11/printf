/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:03:07 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/30 16:04:15 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int		ft_printf(const char	*format, ...);
int		which_format(char format, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long int n);
int		ft_puthex(unsigned long n, int up);
int		ft_putptr(void *ptr);

#endif