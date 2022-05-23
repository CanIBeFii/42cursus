/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:22:56 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/23 16:16:52 by fialexan         ###   ########.fr       */
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
	if ((*stack_a)->order < (*stack_a)->next->order)
	{
		if ((*stack_a)->order < (*stack_a)->next->next->order)
		{
			sa(stack_a);
			ra(stack_a);
		}
		else
			rra(stack_a);
	}
	else if ((*stack_a)->next->order < (*stack_a)->next->next->order)
	{
		if ((*stack_a)->order < (*stack_a)->next->next->order)
			sa(stack_a);
		else
			ra(stack_a);
	}
	else
	{
		sa(stack_a);
		rra(stack_a);
	}
}

void	solve_4(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		position;

	pb(stack_a, &stack_b);
	solve_3(stack_a);
	position = get_position_order(stack_a, stack_b->order);
	if (position == 0)
		pa(stack_a, &stack_b);
	else if (position == 1)
	{
		pa(stack_a, &stack_b);
		sa(stack_a);
	}
	else if (position == 2)
	{
		rra(stack_a);
		pa(stack_a, &stack_b);
		ra(stack_a);
		ra(stack_a);
	}
	else
	{
		pa(stack_a, &stack_b);
		ra(stack_a);
	}
}

void	solve_5(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		position;
	int		index;

	pb(stack_a, &stack_b);
	pb(stack_a, &stack_b);
	solve_3(stack_a);
	position = get_position_order(stack_a, stack_b->order);
	index = 0;
}
