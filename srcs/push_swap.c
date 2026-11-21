/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 19:01:30 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/21 11:47:28 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(both_stacks *stacks)
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

int	main(int argc, char **argv)
{
	t_options	options;
	both_stacks	stacks;

	if (argc == 1)
		return (0);
	init_stacks(&stacks);
	if (parsing_res(argv, &options, &stacks) == -1)
		return (error_upt());
	else
		ft_printf("ok");
	if (stacks.a.data)
	{
		clean_all(&stacks.a);
		clean_all(&stacks.b);
	}
	return (0);
}
