/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 23:08:07 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/04 18:58:57 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, t_data *data, char *base)
{
	long	nb;
	char	buf[9];
	int		i;

	i = 0;
	nb = n;
	if (nb == 0)
	{
		ft_putchar('0', data);
		return ;
	}
	while (nb > 0)
	{
		buf[i] = base[nb % 16];
		nb /= 16;
		i++;
	}
	ft_printrev(buf, data, i);
}
