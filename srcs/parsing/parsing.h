/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:05:54 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/18 12:36:15 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "libft.h"
# include "push_swap.h"

int	bench_check(char *str, t_options *options);
int	simple_check(char *str, t_options *options);
int	medium_check(char *str, t_options *options);
int	complex_check(char *str, t_options *options);
int	adaptive_check(char *str, t_options *options);

#endif