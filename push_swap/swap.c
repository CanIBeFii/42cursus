/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:45:34 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/19 13:23:40 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = (*stack);
	(*stack) = tmp;
}

void	sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
}
