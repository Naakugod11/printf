/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:52:02 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/30 17:37:55 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char	*format, ...)
{
	va_list	args;
	int		total;
	int		result;

	va_start(args, format);
	total = 0;
	while (*format)
	{
		if (*format == '%' && (++format) != NULL)
		{
			result = which_format(*format, args);
			if (result == -1)
				return (va_end(args), result);
		}
		else
		{
			result = write(1, format, 1);
			if (result == -1)
				return (va_end(args), result);
		}
		total += result;
		format++;
	}
	return (va_end(args), total);
}
