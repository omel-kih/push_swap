/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 09:37:22 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/25 13:59:00 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_manager.h"

int	ra(t_stack *a, t_op_count *op)
{
	if (stack_ra(a) == 0)
		return (0);
	ft_printf("ra\n");
	op->ra++;
	return (1);
}

int	rb(t_stack *b, t_op_count *op)
{
	if (stack_ra(b) == 0)
		return (0);
	ft_printf("rb\n");
	op->rb++;
	return (1);
}

int	rr(t_stack *a, t_stack *b, t_op_count *op)
{
	if (stack_ra(a) == 0)
		return (0);
	if (stack_ra(b) == 0)
		return (0);
	ft_printf("rr\n");
	op->rr++;
	return (1);
}

int	stack_ra(t_stack *s)
{
	int	bottom;

	if (s->size <= 1)
		return (0);
	bottom = (s->head + s->size) % s->capacity;
	s->data[bottom] = s->data[s->head];
	s->head = (s->head + 1) % s->capacity;
	return (1);
}
