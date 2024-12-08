/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:20:28 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/15 19:11:24 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			x;	
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		ptr[x] = (unsigned char)c;
		x++;
	}
	return (s);
}
