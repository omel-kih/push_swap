/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 10:19:16 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 12:31:13 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_manager.h"

void	rra(t_stack *a, t_op_count *op)
{
	if (a->size <= 1)
		return ;
	a->head = (a->head + a->size - 1) % a->capacity;
	op->rra++;
}

void	rrb(t_stack *b, t_op_count *op)
{
	if (b->size <= 1)
		return ;
	b->head = (b->head + b->size - 1) % b->capacity;
	op->rrb++;
}

void	rrr(t_stack *a, t_stack *b, t_op_count *op)
{
	rra(a, op);
	rrb(b, op);
}
