/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:27:14 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/15 19:05:58 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*news;
	size_t	len;
	size_t	x;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	news = malloc((len + 1) * sizeof(char));
	if (!news)
		return (NULL);
	x = 0;
	while (*s)
	{
		news[x] = f(x, *s);
		s++;
		x++;
	}
	news[x] = '\0';
	return (news);
}
