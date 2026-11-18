/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:41:36 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/03 20:53:18 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, t_data *data)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)", data);
		return ;
	}
	i = 0;
	while (s[i])
	{
		if (write(1, &s[i], 1) == -1)
		{
			data->s = -1;
			return ;
		}
		i++;
		data->s++;
	}
}
