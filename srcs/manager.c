/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manager.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 19:01:30 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/27 19:02:12 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	init_stacks(t_both_stacks *stacks)
{
	stacks->a.data = NULL;
	stacks->a.head = 0;
	stacks->a.size = 0;
	stacks->a.capacity = 0;
	stacks->b.data = NULL;
	stacks->b.head = 0;
	stacks->b.size = 0;
	stacks->b.capacity = 0;
}

int	error_upt(void)
{
	ft_printf("Error\n");
	return (0);
}

void	prinf(t_stack s)
{
	int	i;

	i = 0;
	while (i < s.size)
	{
		ft_printf("%d", s.data[(s.head + i) % s.capacity]);
		i++;
	}
}

int	manager(char **argv, t_options *options, t_both_stacks *stacks,
		t_op_count *op)
{
	ft_bzero(op, sizeof(t_op_count));
	init_stacks(stacks);
	if (parsing_res(argv, options, stacks) == -1)
		return (error_upt());
	sort_manager(&stacks->a, &stacks->b, op);
	//prinf(stacks->a);
	if (stacks->a.data)
	{
		clean_all(&stacks->a);
		clean_all(&stacks->b);
	}
	return (0);
}
