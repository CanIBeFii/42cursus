/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:56:32 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/27 13:36:08 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solver(t_stack	**stack_a, int argc)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (is_sorted(stack_a) == 1)
		return ;
	if (argc == 2)
		solve_2(stack_a);
	else if (argc == 3)
		solve_3(stack_a);
	else if (argc == 4)
		solve_4(stack_a, &stack_b);
	else if (argc == 5)
		solve_5(stack_a, &stack_b);
	else
		radix_sort(stack_a, &stack_b, argc - 1);
}
