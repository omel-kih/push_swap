/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_classm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:11:02 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/04 19:07:42 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_classm(const char *format, t_data *data, va_list *arg)
{
	data->i++;
	if (format[data->i] == 'c')
		ft_putchar((char)va_arg(*arg, int), data);
	else if (format[data->i] == 's')
		ft_putstr(va_arg(*arg, char *), data);
	else if (format[data->i] == 'd' || format[data->i] == 'i')
		ft_putnbr(va_arg(*arg, int), data);
	else if (format[data->i] == 'x')
		ft_puthex(va_arg(*arg, unsigned int), data, "0123456789abcdef");
	else if (format[data->i] == 'X')
		ft_puthex(va_arg(*arg, unsigned int), data, "0123456789ABCDEF");
	else if (format[data->i] == 'p')
		ft_putpointer(va_arg(*arg, void *), data);
	else if (format[data->i] == 'u')
		ft_putunbr(va_arg(*arg, unsigned int), data);
	else if (format[data->i] == '%')
		ft_putchar('%', data);
	else
	{
		data->s = -1;
		return ;
	}
	data->i++;
}
