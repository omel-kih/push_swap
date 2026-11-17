/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:08:53 by omel-kih          #+#    #+#             */
/*   Updated: 2026/10/14 21:53:41 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	t;
	size_t	i;

	t = 0;
	while (t < size && dst[t])
		t++;
	if (t >= size)
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] && (t + i) < (size - 1))
	{
		dst[t + i] = src[i];
		i++;
	}
	dst[t + i] = '\0';
	return (t + ft_strlen(src));
}
