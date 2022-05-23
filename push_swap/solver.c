/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:56:32 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/23 12:53:18 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solver(t_stack	**stack_a, int argc)
{
	t_stack	*stack_b;

	if (argc == 2)
		solve_2(stack_a);
	else if (argc == 3)
		solve_3(stack_a);
	else if (argc == 4)
		return ;
	else if (argc == 5)
		return ;
	else
		return ;
}
