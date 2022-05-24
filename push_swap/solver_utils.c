/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:56:01 by filipe            #+#    #+#             */
/*   Updated: 2022/05/24 12:41:14 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_position(t_stack **stack, int order)
{
	t_stack	*tmp;
	int		position;

	tmp = (*stack);
	position = 0;
	while (tmp != NULL && tmp->order != order)
	{
		tmp = tmp->next;
		position++;
	}
	return (position);
}

int	get_position_betweeen_num(t_stack **stack, int start, int end)
{
	t_stack	*tmp;
	int		position;

	position = 0;
	tmp = (*stack);
	while (tmp && start <= tmp->order && tmp->order <= end)
	{
		tmp = tmp->next;
		position++;
	}
	return (position);
}

int	get_position_order(t_stack **stack, int order)
{
	t_stack	*tmp;
	int		position;

	tmp = (*stack);
	position = 0;
	while (tmp != NULL && tmp->order < order)
	{
		tmp = tmp->next;
		position++;
	}
	return (position);
}

int	stack_size(t_stack **stack)
{
	t_stack	*tmp;
	int		size;

	size = 0;
	tmp = (*stack);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
