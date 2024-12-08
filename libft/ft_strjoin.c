/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:30:21 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/15 19:10:52 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;	
	size_t	lens1;
	size_t	totlen;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	totlen = lens1 + ft_strlen(s2);
	news = (char *)malloc(totlen + 1);
	if (!news)
		return (NULL);
	ft_strlcpy(news, s1, lens1 + 1);
	ft_strlcat(news, s2, totlen + 1);
	return (news);
}
