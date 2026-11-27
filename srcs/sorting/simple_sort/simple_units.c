/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_units.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 12:58:17 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/27 19:21:16 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

int	p_offset(t_stack s, int index)
{
	return ((s.head + index) % s.capacity);
}

int	is_sorted(t_stack a)
{
	int	i;
	int	j;

	if (a.size <= 1)
		return (1);
	i = 0;
	while (i < a.size - 1)
	{
		j = p_offset(a, i);
		if (a.data[j] > a.data[p_offset(a, i + 1)])
			return (0);
		i++;
	}
	return (1);
}

int	find_mini_pos(t_stack a)
{
	int	i;
	int	pos;
	int	min;

	i = 0;
	pos = i;
	min = a.data[p_offset(a, i)];
	while (i < a.size)
	{
		if (min > a.data[p_offset(a, i)])
		{
			min = a.data[p_offset(a, i)];
			pos = i;
		}
		i++;
	}
	return (pos);
}
