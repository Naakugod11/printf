/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:55:26 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/30 16:06:09 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_puthex(unsigned long n, int up)
{
	char	*hex_digit;
	int		count;

	count = 0;
	if (up)
		hex_digit = "0123456789ABCDEF";
	else
		hex_digit = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_puthex(n / 16, up);
		if (count == -1)
			return (-1);
	}
	count += ft_putchar(hex_digit[n % 16]);
	if (count == -1)
		return (-1);
	return (count);
}
