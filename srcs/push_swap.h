/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 19:29:55 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/20 12:53:00 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
} both_stacks;

# include "../Libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include "parsing/parsing.h"

#endif