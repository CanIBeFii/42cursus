/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:04:06 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/24 11:45:52 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*mem;

	tmp = stacklast((*stack));
	mem = (*stack)->next;
	tmp->next = (*stack);
	tmp->next->next = NULL;
	(*stack) = mem;
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}

void	rotate_x_times(t_stack **stack, int x, int stack_num)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (stack_num == 1)
			ra(stack);
		else
			rb(stack);
		i++;
	}
}
