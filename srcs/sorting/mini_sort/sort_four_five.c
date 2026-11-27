/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 09:55:56 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/26 15:09:35 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

int	find_min(t_stack *a, int size)
{
	int	i;
	int	min;
	int	min_pos;

	i = 0;
	min_pos = 0;
	min = a->data[a->head];
	while (i < size)
	{
		if (a->data[(a->head + i) % a->capacity] < min)
		{
			min = a->data[(a->head + i) % a->capacity];
			min_pos = i;
		}
		i++;
	}
	return (min_pos);
}

void	sort_four(t_stack *a, t_stack *b, t_op_count *op)
{
	int	min_pos;

	min_pos = find_min(a, 4);
	if (min_pos <= 2)
	{
		while (min_pos > 0)
		{
			ra(a, op);
			min_pos--;
		}
	}
	else
		rra(a, op);
	pb(a, b, op);
	sort_three(a, op);
	pa(a, b, op);
}

void	sort_five(t_stack *a, t_stack *b, t_op_count *op)
{
	int	min_pos;

	min_pos = find_min(a, 5);
	if (min_pos <= 3)
	{
		while (min_pos > 0)
		{
			ra(a, op);
			min_pos--;
		}
	}
	else
		rra(a, op);
	pb(a, b, op);
	sort_four(a, b, op);
	pa(a, b, op);
}
