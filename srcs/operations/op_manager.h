/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_manager.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 16:15:57 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/25 13:49:02 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OP_MANAGER_H
# define OP_MANAGER_H

# include "../push_swap.h"

int		push_top(t_stack *stack, int value);
int		pop_top(t_stack *stack);
void	swap_top(t_stack *stack);
void	sa(t_stack *a, t_op_count *op);
void	sb(t_stack *b, t_op_count *op);
void	ss(t_stack *a, t_stack *b, t_op_count *op);
void	pa(t_stack *a, t_stack *b, t_op_count *op);
void	pb(t_stack *a, t_stack *b, t_op_count *op);

int		stack_ra(t_stack *s);
int		ra(t_stack *a, t_op_count *op);
int		rb(t_stack *b, t_op_count *op);
int		rr(t_stack *a, t_stack *b, t_op_count *op);

int		stack_rr(t_stack *s);
int		rra(t_stack *a, t_op_count *op);
int		rrb(t_stack *b, t_op_count *op);
int		rrr(t_stack *a, t_stack *b, t_op_count *op);

#endif