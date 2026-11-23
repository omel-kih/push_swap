/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 12:15:03 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/23 13:50:44 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/push_swap.h"

int	main(int argc, char **argv)
{
	t_options		options;
	t_both_stacks	stacks;
	t_op_count		op;

	if (argc == 1)
		return (0);
	manager(argv, &options, &stacks, &op);
}
