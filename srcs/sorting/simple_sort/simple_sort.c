/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 13:10:06 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/27 18:51:09 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	rra_apply(t_stack *a, t_op_count *op, int pos)
{
	while (pos < a->size)
	{
		rra(a, op);
		pos++;
	}
}

void	ra_apply(t_stack *a, t_op_count *op, int pos)
{
	while (pos > 0)
	{
		ra(a, op);
		pos--;
	}
}

void	simple_sort(t_stack *a, t_stack *b, t_op_count *op)
{
	int	min_pos;

	min_pos = 0;
	while (a->size > 1)
	{
		min_pos = find_mini_pos(*a);
		if (a->size - min_pos < min_pos)
			rra_apply(a, op, min_pos);
		else 
			ra_apply(a, op, min_pos);
		pb(a, b, op);
	}
	while (b->size != 0)
		pa(a, b, op);
}
