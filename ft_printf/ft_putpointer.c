/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 23:40:51 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/05 13:25:34 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_wp(uintptr_t iptr, t_data *data, char *base)
{
	if (iptr >= 16)
	{
		ft_wp((iptr / 16), data, base);
	}
	if (data->s == -1)
		return ;
	ft_putchar(base[iptr % 16], data);
}

void	ft_putpointer(void *ptr, t_data *data)
{
	uintptr_t	iptr;

	if (!ptr)
	{
		ft_putstr("(nil)", data);
		return ;
	}
	iptr = (uintptr_t)ptr;
	ft_putstr("0x", data);
	if (data->s == -1)
		return ;
	ft_wp(iptr, data, "0123456789abcdef");
}
