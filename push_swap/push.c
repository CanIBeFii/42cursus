/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:49:26 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/19 15:06:01 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack_sender, t_stack **stack_receiver)
{
	t_stack	*mem;
	t_stack	*tmp;

	if (*stack_sender == NULL)
		return ;
	mem = (*stack_sender)->next;
	tmp = (*stack_sender);
	(*stack_sender) = mem;
	tmp->next = (*stack_receiver);
	(*stack_receiver) = (tmp);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_putendl_fd("pa", 1);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_putendl_fd("pb", 1);
}
