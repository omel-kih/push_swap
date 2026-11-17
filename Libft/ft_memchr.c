/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:02:38 by omel-kih          #+#    #+#             */
/*   Updated: 2026/10/15 08:31:34 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*chr;

	i = 0;
	chr = (const unsigned char *)s;
	while (i < n)
	{
		if (chr[i] == (const unsigned char)c)
			return ((void *)&chr[i]);
		i++;
	}
	return (NULL);
}
