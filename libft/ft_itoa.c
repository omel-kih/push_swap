/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:32:32 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 13:41:54 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_len(int n)
{
	int		i;
	long	ln;

	i = 0;
	ln = n;
	if (ln == 0)
		return (1);
	if (ln < 0)
	{
		ln = -ln;
		i++;
	}
	while (ln > 0)
	{
		ln /= 10;
		i++;
	}
	return (i);
}

static void	mal_f(char *res, int n, int z)
{
	int		i;
	long	ln;

	i = z;
	ln = n;
	if (ln == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return ;
	}
	if (ln < 0)
	{
		ln = -ln;
		res[0] = '-';
		i--;
	}
	res[z--] = '\0';
	while (i-- > 0)
	{
		res[z--] = (ln % 10) + 48;
		ln /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = s_len(n);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	mal_f(res, n, i);
	return (res);
}
