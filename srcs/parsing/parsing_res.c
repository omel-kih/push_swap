/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_res.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 18:55:53 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 12:33:16 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	clean_all(t_stack *stack)
{
	if (stack->data)
	{
		free(stack->data);
		stack->data = NULL;
	}
	stack->capacity = 0;
	stack->size = 0;
	return (-1);
}

int	parsing_res(char **argv, t_options *options, t_both_stacks *stacks)
{
	int	i;

	i = flags_set(argv, options);
	if (i == -1)
		return (-1);
	if (options->strategy == 0)
		options->strategy = 4;
	if (numbers_check(argv, i, &stacks->a) == -1)
		return (clean_all(&stacks->a));
	stacks->b.data = malloc(sizeof(int) * stacks->a.capacity);
	if (!stacks->b.data)
		return (clean_all(&stacks->a));
	stacks->b.capacity = stacks->a.capacity;
	return (1);
}
