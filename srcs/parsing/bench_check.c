/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:05:00 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/18 12:42:41 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	bench_check(char *str, t_options *options)
{
	if (ft_strncmp(str, "--bench", 8) == 0)
	{
		if (options->benchmark)
			return (-1);
		options->benchmark = 1;
	}
	return (1);
}