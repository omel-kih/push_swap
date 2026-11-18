/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:46:47 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/04 18:59:30 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, t_data *data)
{
	long	nb;
	char	buf[11];
	int		i;

	i = 0;
	nb = n;
	if (nb == 0)
	{
		ft_putchar('0', data);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', data);
		if (data->s == -1)
			return ;
		nb = -nb;
	}
	while (nb > 0)
	{
		buf[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	ft_printrev(buf, data, i);
}
