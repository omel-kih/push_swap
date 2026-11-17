/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:46:46 by omel-kih          #+#    #+#             */
/*   Updated: 2026/10/22 12:13:08 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tot;

	if (size == 0 || nmemb == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	tot = malloc(nmemb * size);
	if (!tot)
		return (NULL);
	ft_memset(tot, 0, nmemb * size);
	return (tot);
}
