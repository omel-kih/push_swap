/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:13:54 by omel-kih          #+#    #+#             */
/*   Updated: 2026/10/16 13:38:04 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && is_set(s1[i], set) == 1)
		i++;
	len = ft_strlen(s1);
	while (len > i && is_set(s1[len - 1], set) == 1)
		len--;
	return (ft_substr(s1, i, len - i));
}
