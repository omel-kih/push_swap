/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:20:24 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/18 12:54:11 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	simple_check(char *str, t_options *options)
{
	if (ft_strncmp(str, "--simple", 9) == 0)
	{
		if (options->strategy)
			return (-1);
		options->strategy = 1;
		return (1);
	}
	return (0);
}

int	medium_check(char *str, t_options *options)
{
	if (ft_strncmp(str, "--medium", 9) == 0)
	{
		if (options->strategy)
			return (-1);
		options->strategy = 2;
		return (1);
	}
	return (0);
}
int	complex_check(char *str, t_options *options)
{
	if (ft_strncmp(str, "--complex", 9) == 0)
	{
		if (options->strategy)
			return (-1);
		options->strategy = 3;
		return(1);
	}
	return (0);
}

int	adaptive_check(char *str, t_options *options)
{
	if (ft_strncmp(str, "--adaptive", 11) == 0)
	{
		if (options->strategy)
			return (-1);
		options->strategy = 4;
		return (1);
	}
	return (0);
}
