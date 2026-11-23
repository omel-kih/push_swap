/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 09:37:22 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 12:07:00 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_manager.h"

void	ra(t_stack *a, t_op_count *op)
{
	if (a->size <= 1)
		return ;
	a->head = (a->head + 1) % a->capacity;
	op->ra++;
}

void	rb(t_stack *b, t_op_count *op)
{
	if (b->size <= 1)
		return ;
	b->head = (b->head + 1) % b->capacity;
	op->rb++;
}

void	rr(t_stack *a, t_stack *b, t_op_count *op)
{
	ra(a, op);
	rb(b, op);
}
