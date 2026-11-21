/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 11:37:16 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/21 09:24:45 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	numbers_check(char **argv, int i, t_stack *stack_a)
{
	int	s;

	if (!argv[i])
		return (0);
	s = counter(argv, i);
	stack_a->data = malloc(sizeof(int) * s);
	if (!stack_a->data)
		return (-1);
	stack_a->capacity = s;
	if (numbers_manager(argv, i, stack_a) == -1)
		return (-1);
	return (1);
}

int	counter(char **argv, int i)
{
	int	j;
	int	res;

	res = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			while (argv[i][j] && argv[i][j] <= 32)
				j++;
			if (argv[i][j])
				res++;
			while (argv[i][j] && argv[i][j] > 32)
				j++;
		}
		i++;
	}
	return (res);
}

int	numbers_manager(char **argv, int i, t_stack *stack_a)
{
	int	j;

	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			while (argv[i][j] && argv[i][j] <= 32)
				j++;
			if (argv[i][j])
				j = costum_atoi(argv[i], j, stack_a);
			if (j == -1)
				return (-1);
		}
		i++;
	}
	return (1);
}

int	costum_atoi(char *str, int i, t_stack *stack_a)
{
	long	res;
	int		sign;
	int		has_digit;

	sign = 1;
	res = 0;
	has_digit = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		has_digit = 1;
		res = res * 10 + (str[i] - '0');
		if (res * sign > INT_MAX || res * sign < INT_MIN)
			return (-1);
		i++;
	}
	if (!has_digit || (str[i] && str[i] > 32))
		return (-1);
	return (dup_check((int)(res * sign), stack_a, i));
}

int	dup_check(int nb, t_stack *stack_a, int index)
{
	int	i;

	i = 0;
	while (i < stack_a->size)
	{
		if (nb == stack_a->data[i])
			return (-1);
		i++;
	}
	stack_a->data[i] = nb;
	stack_a->size++;
	return (index);
}
