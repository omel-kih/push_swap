/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:32:19 by omel-kih          #+#    #+#             */
/*   Updated: 2026/10/13 22:58:13 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tmp;
	const unsigned char	*tmpsrc;

	i = 0;
	tmp = (unsigned char *)dest;
	tmpsrc = (const unsigned char *)src;
	while (n > 0)
	{
		tmp[i] = tmpsrc[i];
		i++;
		n--;
	}
	return (dest);
}
