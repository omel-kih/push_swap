/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_manager.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 16:15:57 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 12:07:47 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OP_MANAGER_H
# define OP_MANAGER_H

# include "../push_swap.h"

void	sa(t_stack *a, t_op_count *op);
void	sb(t_stack *b, t_op_count *op);
void	ss(t_stack *a, t_stack *b, t_op_count *op);
void	pa(t_stack *a, t_stack *b, t_op_count *op);
void	pb(t_stack *a, t_stack *b, t_op_count *op);
void	rra(t_stack *a, t_op_count *op);
void	rrb(t_stack *b, t_op_count *op);
void	rrr(t_stack *a, t_stack *b, t_op_count *op);
void	ra(t_stack *a, t_op_count *op);
void	rb(t_stack *b, t_op_count *op);
void	rr(t_stack *a, t_stack *b, t_op_count *op);

#endif