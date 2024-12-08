/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:07:15 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/15 16:29:58 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (s < d)
	{
		s += len - 1;
		d += len - 1;
		while (len--)
			*d-- = *s--;
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
