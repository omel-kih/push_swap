/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:16:33 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/25 13:52:19 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_manager.h"

int	push_top(t_stack *s, int value)
{
	int	new_head;

	if (s->capacity == s->size)
		return (0);
	new_head = (s->head + s->capacity - 1) % s->capacity;
	s->data[new_head] = value;
	s->head = new_head;
	s->size++;
	return (1);
}

int	pop_top(t_stack *s)
{
	int	tmp;

	tmp = s->data[s->head];
	s->head = (s->head + 1) % s->capacity;
	s->size--;
	return (tmp);
}

void	swap_top(t_stack *s)
{
	int	tmp;

	if (s->size < 2)
		return ;
	tmp = s->data[s->head];
	s->data[s->head] = s->data[(s->head + 1) % s->capacity];
	s->data[(s->head + 1) % s->capacity] = tmp;
}
