/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_res.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 18:55:53 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/18 13:08:47 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "push_swap.h"

int	flags_set(int argc, char **argv, t_options *options)
{
	int	i;
	int	re;

	i = 1;
	while (ft_strncmp(argv[i], "--", 2) == 0)
	{
		if (re = simple_check(argv[i], options))
		{
		}
		else if (re = medium_check(argv[i], options))
		{
		}
		else if (re = complex_check(argv[i], options))
		{
		}
		else if (re = adaptive_check(argv[i], options))
		{
		}
		if (re == -1)
			return ();
	}
}

int	parsing_res(int argc, char **argv, t_options *options)
{
}
