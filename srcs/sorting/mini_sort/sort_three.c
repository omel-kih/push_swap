/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 09:43:54 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/27 13:24:48 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	three_classes(t_stack *a, int *arr, t_op_count *op)
{
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] > arr[2])
		ra(a, op);
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] < arr[2])
	{
		sa(a, op);
		ra(a, op);
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] < arr[2])
		sa(a, op);
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] > arr[2])
		rra(a, op);
	else if (arr[0] > arr[1] && arr[1] > arr[2])
	{
		sa(a, op);
		rra(a, op);
	}
}

void	sort_three(t_stack *a, t_op_count *op)
{
	int	arr[3];

	arr[0] = a->data[a->head];
	arr[1] = a->data[(a->head + 1) % a->capacity];
	arr[2] = a->data[(a->head + 2) % a->capacity];
	if (arr[0] < arr[1] && arr[1] < arr[2])
		return ;
	three_classes(a, arr, op);
}
