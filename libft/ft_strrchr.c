/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:48:27 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/16 13:37:44 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	x;

	x = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)s + x);
	while (x > 0)
	{
		if ((unsigned char)s[x - 1] == (unsigned char)c)
		{
			return ((char *)(s + x - 1));
		}
		x--;
	}
	return (NULL);
}
