/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:05:54 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/21 12:05:09 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "../../Libft/libft.h"
# include "../push_swap.h"
# include <stdlib.h>

int	clean_all(t_stack *stack);
int	flags_set(char **argv, t_options *options);
int	bench_check(t_options *options);
int	parsing_res(char **argv, t_options *options, both_stacks *stacks);
int	strategy_set(t_options *options, int postion);
int	numbers_check(char **argv, int i, t_stack *stack_a);
int	counter(char **argv, int i);
int	numbers_manager(char **argv, int i, t_stack *stack_a);
int	costum_atoi(char *str, int i, t_stack *stack_a);
int	dup_check(int nb, t_stack *stack_a, int index);

#endif