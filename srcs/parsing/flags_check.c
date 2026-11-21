/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:05:00 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/19 09:47:46 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	strategy_set(t_options *options, int postion)
{
	if (options->strategy)
		return (-1);
	options->strategy = postion;
	return (1);
}

int	bench_check(t_options *options)
{
	if (options->benchmark)
		return (-1);
	options->benchmark = 1;
	return (1);
}

int	flags_set(char **argv, t_options *options)
{
	int	i;
	int	re;

	i = 1;
	options->benchmark = 0;
	options->strategy = 0;
	while (argv[i] && ft_strncmp(argv[i], "--", 2) == 0)
	{
		re = -1;
		if (ft_strncmp(argv[i], BENCH, 8) == 0)
			re = bench_check(options);
		else if (ft_strncmp(argv[i], SIMPLE, 9) == 0)
			re = strategy_set(options, 1);
		else if (ft_strncmp(argv[i], MEDIUM, 9) == 0)
			re = strategy_set(options, 2);
		else if (ft_strncmp(argv[i], COMPLEX, 10) == 0)
			re = strategy_set(options, 3);
		else if (ft_strncmp(argv[i], ADAPTIVE, 11) == 0)
			re = strategy_set(options, 4);
		if (re == -1)
			return (-1);
		i++;
	}
	return (i);
}
