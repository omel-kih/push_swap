/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:20:42 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/05 13:37:56 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printage(const char *format, t_data *data, va_list *arg)
{
	while (format[data->i])
	{
		if (format[data->i] == '%')
		{
			ft_classm(format, data, arg);
		}
		else
		{
			ft_putchar(format[data->i], data);
			data->i++;
		}
		if (data->s == -1)
			return ;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	t_data	data;

	data.i = 0;
	data.s = 0;
	if (!format)
		return (-1);
	va_start(arg, format);
	printage(format, &data, &arg);
	va_end(arg);
	return (data.s);
}
