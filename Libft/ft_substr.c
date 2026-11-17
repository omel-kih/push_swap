/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:40:45 by omel-kih          #+#    #+#             */
/*   Updated: 2026/10/23 10:26:06 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	tot_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	if ((s_len - start) > len)
		tot_len = len;
	else
		tot_len = (s_len - start);
	sub = malloc(tot_len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, &s[start], tot_len);
	sub[tot_len] = '\0';
	return (sub);
}
