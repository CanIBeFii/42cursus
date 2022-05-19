/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:49:26 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/19 14:57:51 by fialexan         ###   ########.fr       */
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


