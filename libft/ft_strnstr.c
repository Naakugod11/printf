/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:49:35 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/16 13:39:49 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (x < len && haystack[x] != '\0')
	{
		y = 0;
		while (haystack[x + y] == needle[y] && needle[y] != '\0'
			&& x + y < len && haystack[x + y] != '\0')
			y++;
		if (y == ft_strlen(needle))
			return ((char *)haystack + x);
		x++;
	}
	return (NULL);
}
