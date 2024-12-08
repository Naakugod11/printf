/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:53:55 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/30 15:55:41 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	if (ptr == NULL)
		return (ft_putstr("0x0"));
	address = (unsigned long)ptr;
	count += ft_putstr("0x");
	if (count == -1)
		return (-1);
	count += ft_puthex(address, 0);
	if (count == -1)
		return (-1);
	return (count);
}
