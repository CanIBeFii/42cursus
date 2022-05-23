/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:22:56 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/23 08:17:18 by filipe           ###   ########.fr       */
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


void	solve_4(t_stack **stack_a)
{
	int		position;
	t_stack	*stack_b;

	position = get_position(stack_a, 3);
	if (position == 0)
	{
		pb(stack_a, &stack_b);
		solve_3(stack_a);
		pa(stack_a, &stack_b);
		ra(stack_a);
	}
	else if (position == 3)
	{
		rra(stack_a);
		pb(stack_a, &stack_b);
		solve_3(stack_a);
		pa(stack_a, &stack_b);
		ra(stack_a);
	}
	else
	{
		while (position != 0)
		{
			ra(stack_a);
			position = get_position(stack_a);
		}
		pb(stack_a, &stack_b);
		solve_3(stack_a);
		pa(stack_a, &stack_b);
		ra(stack_a);
	}
}

void	solve_5(t_stack **stack_a)
{
}
