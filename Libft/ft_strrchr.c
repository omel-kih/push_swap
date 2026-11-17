/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:57:49 by omel-kih          #+#    #+#             */
/*   Updated: 2026/10/23 11:16:47 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*res;

	i = 0;
	if (!s)
		return (NULL);
	res = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			res = &s[i];
		i++;
	}
	if (s[i] == (char)c)
		res = &s[i];
	return ((char *)res);
}
