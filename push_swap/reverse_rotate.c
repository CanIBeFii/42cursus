/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:37:23 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/24 12:03:17 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*mem;

	mem = stackbefore_last(*stack);
	tmp = stacklast(*stack);
	mem->next = NULL;
	tmp->next = (*stack);
	(*stack) = tmp;
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack	**stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putendl_fd("rrr", 1);
}

void	r_rotate_x_times(t_stack **stack, int x, int stack_num)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (stack_num == 1)
			rra(stack);
		else
			rrb(stack);
		i++;
	}
}	
