/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:44:53 by filipe            #+#    #+#             */
/*   Updated: 2022/05/16 13:52:21 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stacklast(t_stack	*stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_stack	*stackbefore_last(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp && tmp->next != NULL && tmp->next->next != NULL
		&& tmp->next->next->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

void	stackadd_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

void	stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (stack)
	{
		if (*stack)
		{
			tmp = stacklast(*stack);
			tmp->next = new;
		}
		else
			*stack = new;
	}
}
