/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:18:08 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/30 16:05:56 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_putnbr(long int n)
{
	int		count;
	char	nbr;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += write(1, "-", 1);
		if (count == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
		if (count == -1)
			return (-1);
	}
	nbr = (n % 10) + '0';
	count += write(1, &nbr, 1);
	if (count == -1)
		return (-1);
	return (count);
}
