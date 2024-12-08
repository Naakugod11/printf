/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:35:24 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/16 18:05:13 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*(s))
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0' || *s == (char)c)
		return ((char *)s);
	return (NULL);
}
