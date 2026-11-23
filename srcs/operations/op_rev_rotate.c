/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 10:19:16 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 16:28:06 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_manager.h"

void	rra(t_stack *a, t_op_count *op)
{
	int	bottom;
	int	new_head;

	if (a->size <= 1)
		return ;
	bottom = (a->head + a->size - 1) % a->capacity;
	new_head = (a->head + a->capacity - 1) % a->capacity;
	a->data[new_head] = a->data[bottom];
	a->head = new_head;
	op->rra++;
}

void	rrb(t_stack *b, t_op_count *op)
{
	int	bottom;
	int	new_head;

	if (b->size <= 1)
		return ;
	bottom = (b->head + b->size - 1) % b->capacity;
	new_head = (b->head + b->capacity - 1) % b->capacity;
	b->data[new_head] = b->data[bottom];
	b->head = new_head;
	op->rrb++;
}

void	rrr(t_stack *a, t_stack *b, t_op_count *op)
{
	rra(a, op);
	rrb(b, op);
}
