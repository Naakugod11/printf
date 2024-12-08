/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 21:23:04 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/16 18:13:55 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	nbr;
	int	min;

	x = 0;
	nbr = 0;
	min = 1;
	while ((str[x] >= 9 && str[x] <= 13) || (str[x] == ' '))
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x + 1] == '-' || str[x + 1] == '+')
			return (0);
		if (str[x] == '-')
			min = -1;
		x++;
	}
	while (str[x] && str[x] >= '0' && str[x] <= '9')
	{
		nbr = nbr * 10 + str[x] - '0';
		x++;
	}
	return (nbr * min);
}
