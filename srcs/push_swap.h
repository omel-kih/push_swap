/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 19:29:55 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 13:49:59 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>
# include <stddef.h>
# include <stdlib.h>

# define BENCH "--bench"
# define SIMPLE "--simple"
# define MEDIUM "--medium"
# define COMPLEX "--complex"
# define ADAPTIVE "--adaptive"

typedef struct s_options
{
	int		strategy;
	int		benchmark;
}			t_options;

typedef struct s_stack
{
	int		*data;
	int		head;
	int		size;
	int		capacity;
}			t_stack;

typedef struct bth_stacks
{
	t_stack	a;
	t_stack	b;
}			t_both_stacks;

typedef struct s_op
{
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
}			t_op_count;

void		init_stacks(t_both_stacks *stacks);
int			error_upt(void);
int			manager(char **argv, t_options *options, t_both_stacks *stacks,
				t_op_count *op);
int			parsing_res(char **argv, t_options *options, t_both_stacks *stacks);
int			clean_all(t_stack *stack);
#endif