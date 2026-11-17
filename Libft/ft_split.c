/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:11:09 by omel-kih          #+#    #+#             */
/*   Updated: 2026/10/26 14:49:33 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			w++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (w);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*freey(char **res, size_t i)
{
	while (i > 0)
	{
		free(res[i - 1]);
		i--;
	}
	free(res);
	return (NULL);
}

static char	**split_fill(char const *s, char **res, size_t w, char c)
{
	size_t	l;
	size_t	i;
	size_t	m;

	m = 0;
	i = 0;
	while (i < w)
	{
		while (s[m] && s[m] == c)
			m++;
		l = word_len(&s[m], c);
		res[i] = ft_substr(s, m, l);
		if (!res[i])
			return (freey(res, i));
		m += l;
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	w;
	char	**res;

	if (!s)
		return (NULL);
	w = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (w + 1));
	if (!res)
		return (NULL);
	return (split_fill(s, res, w, c));
}
