/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:55:08 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/25 13:48:33 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_manager.h"

void	sa(t_stack *a, t_op_count *op)
{
	swap_top(a);
	ft_printf("sa\n");
	op->sa++;
}

void	sb(t_stack *b, t_op_count *op)
{
	swap_top(b);
	ft_printf("sb\n");
	op->sb++;
}

void	ss(t_stack *a, t_stack *b, t_op_count *op)
{
	swap_top(a);
	swap_top(b);
	ft_printf("ss\n");
	op->ss++;
}

void	pa(t_stack *a, t_stack *b, t_op_count *op)
{
	int	value;

	value = pop_top(b);
	push_top(a, value);
	ft_printf("pa\n");
	op->pa++;
}

void	pb(t_stack *a, t_stack *b, t_op_count *op)
{
	int	value;

	value = pop_top(a);
	push_top(b, value);
	ft_printf("pb\n");
	op->pb++;
}
