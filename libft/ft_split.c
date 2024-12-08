/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:38:04 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/18 14:33:09 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c);
static char	*get_next_word(const char **s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	wordcount;
	size_t	x;

	if (!s)
		return (NULL);
	wordcount = count_words(s, c);
	result = (char **)malloc((wordcount + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	x = 0;
	while (x < wordcount)
	{
		result[x] = get_next_word(&s, c);
		if (!result[x])
		{
			while (x > 0)
				free(result[--x]);
			free(result);
			return (NULL);
		}
		x++;
	}
	result[x] = NULL;
	return (result);
}

static char	*get_next_word(const char **s, char c)
{
	char	*word;
	size_t	wordlen;

	wordlen = 0;
	while (**s == c)
		(*s)++;
	while ((*s)[wordlen] && (*s)[wordlen] != c)
		wordlen++;
	word = (char *)malloc((wordlen + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, *s, wordlen + 1);
	*s += wordlen;
	return (word);
}

static int	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && (*s != c))
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}
