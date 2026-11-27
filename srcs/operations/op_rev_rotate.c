/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 10:19:16 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/25 13:52:30 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_manager.h"

int	rra(t_stack *a, t_op_count *op)
{
	if (stack_rr(a) == 0)
		return (0);
	ft_printf("rra\n");
	op->rra++;
	return (1);
}

int	rrb(t_stack *b, t_op_count *op)
{
	if (stack_rr(b) == 0)
		return (0);
	ft_printf("rrb\n");
	op->rrb++;
	return (1);
}

int	rrr(t_stack *a, t_stack *b, t_op_count *op)
{
	if (stack_rr(a) == 0)
		return (0);
	if (stack_rr(b) == 0)
		return (0);
	ft_printf("rrr\n");
	op->rrr++;
	return (1);
}

int	stack_rr(t_stack *s)
{
	int	bottom;
	int	new_head;

	if (s->size <= 1)
		return (0);
	bottom = (s->head + s->size - 1) % s->capacity;
	new_head = (s->head + s->capacity - 1) % s->capacity;
	s->data[new_head] = s->data[bottom];
	s->head = new_head;
	return (1);
}
