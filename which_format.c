/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:18:29 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/30 17:39:32 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	which_format(char format, va_list args)
{
	int	argres;

	if (format == 'c')
		argres = ft_putchar(va_arg(args, int));
	else if (format == 's')
		argres = ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		argres = ft_putnbr((long)va_arg(args, int));
	else if (format == 'u')
		argres = ft_putnbr(va_arg(args, unsigned int));
	else if (format == 'x')
		argres = ft_puthex((long)va_arg(args, unsigned int), 0);
	else if (format == 'X')
		argres = ft_puthex((long)va_arg(args, unsigned int), 1);
	else if (format == 'p')
		argres = ft_putptr(va_arg(args, void *));
	else if (format == '%')
		argres = ft_putchar('%');
	else
		return (-1);
	return (argres);
}
