/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:18:01 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 13:41:54 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;

	d = (unsigned char *)dest;
	if (d < (unsigned char *)src)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n)
		{
			n--;
			d[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}
