/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:55:08 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 12:30:50 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_manager.h"

void	sa(t_stack *a, t_op_count *op)
{
	int	tmp;

	if (a->size <= 1)
		return ;
	tmp = a->data[a->head];
	a->data[a->head] = a->data[(a->head + 1) % a->capacity];
	a->data[(a->head + 1) % a->capacity] = tmp;
	op->sa++;
}

void	sb(t_stack *b, t_op_count *op)
{
	int	tmp;

	if (b->size <= 1)
		return ;
	tmp = b->data[b->head];
	b->data[b->head] = b->data[(b->head + 1) % b->capacity];
	b->data[(b->head + 1) % b->capacity] = tmp;
	op->sb++;
}

void	ss(t_stack *a, t_stack *b, t_op_count *op)
{
	sa(a, op);
	sb(b, op);
}

void	pa(t_stack *a, t_stack *b, t_op_count *op)
{
	int	tmp;

	if (b->size == 0 || a->size == a->capacity)
		return ;
	tmp = b->data[b->head];
	a->head = (a->head + a->size) % a->capacity;
	a->data[a->head] = tmp;
	b->size -= 1;
	a->size += 1;
	b->head = (b->head + 1) % b->capacity;
	op->pa++;
}

void	pb(t_stack *a, t_stack *b, t_op_count *op)
{
	int	tmp;

	if (a->size == 0 || b->size == b->capacity)
		return ;
	tmp = a->data[a->head];
	b->head = (b->head + b->size) % b->capacity;
	b->data[b->head] = tmp;
	a->size -= 1;
	b->size += 1;
	a->head = (a->head + 1) % a->capacity;
	op->pb++;
}
