/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:22:56 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/19 13:03:27 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solve_2(t_stack **stack_a)
{
	if (is_sorted(stack_a) == 0)
		sa(stack_a);
}

void	solve_3(t_stack	**stack_a)
{
	if (is_sorted(stack_a) == 1)
		return ;
	if ((*stack_a)->order == 0)
	{
	}
	else if ((*stack_a)->order == 1)
	{
	}
	else
	{
	}
}
