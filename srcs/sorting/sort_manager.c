/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 14:47:46 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/27 15:48:19 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	hand_small(t_stack *a, t_stack *b, t_op_count *op)
{
	if (a->size == 2)
	{
		if (a->data[a->head] > a->data[(a->head + 1) % a->capacity])
			sa(a, op);
		return ;
	}
	else if (a->size == 3)
	{
		sort_three(a, op);
		return ;
	}
	else if (a->size == 4)
	{
		sort_four(a, b, op);
		return ;
	}
	else if (a->size == 5)
	{
		sort_five(a, b, op);
		return ;
	}
}

void	sort_manager(t_stack *a, t_stack *b, t_op_count *op)
{
	if (is_sorted(*a) == 1)
		return ;
	else if (a->size >= 2 && a->size <= 5)
		hand_small(a, b, op);
	else
		simple_sort(a, b, op);
}
