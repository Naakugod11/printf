/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:53:48 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/15 19:10:40 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
	{
		while (src[x])
			x++;
		return (x);
	}
	while (x < n - 1 && src[x] != '\0')
	{
		dst[x] = src[x];
		x++;
	}
	if (x < n)
		dst[x] = '\0';
	while (src[x] != '\0')
		x++;
	return (x);
}
