/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:56:14 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/16 13:30:53 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dst;
	x = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (dst);
}
