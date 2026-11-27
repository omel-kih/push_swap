/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 09:42:03 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/27 15:43:31 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include "../operations/op_manager.h"
# include "../push_swap.h"

void	sort_manager(t_stack *a, t_stack *b, t_op_count *op);
void	hand_small(t_stack *a, t_stack *b, t_op_count *op);

void	three_classes(t_stack *a, int *arr, t_op_count *op);
void	sort_three(t_stack *a, t_op_count *op);

void	sort_four(t_stack *a, t_stack *b, t_op_count *op);
int		find_min(t_stack *a, int size);
void	sort_five(t_stack *a, t_stack *b, t_op_count *op);

int		is_sorted(t_stack a);
int		l_offset(t_stack s, int index);
int		find_mini_pos(t_stack a);
void	rra_apply(t_stack *a, t_op_count *op, int pos);
void	ra_apply(t_stack *a, t_op_count *op, int pos);
void	simple_sort(t_stack *a, t_stack *b, t_op_count *op);
#endif