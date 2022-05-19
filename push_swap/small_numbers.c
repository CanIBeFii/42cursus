/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:22:56 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/19 16:13:45 by fialexan         ###   ########.fr       */
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
		sa(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->order == 1)
	{
		if ((*stack_a)->next->order == 0)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if ((*stack_a)->next->order == 0)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}	
	}
}
