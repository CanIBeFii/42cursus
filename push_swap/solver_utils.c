/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:56:01 by filipe            #+#    #+#             */
/*   Updated: 2022/05/23 07:59:54 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_position(t_stack **stack, int order)
{
	t_stack tmp;
	int		position;

	tmp = (*stack);
	position = 0;
	while (tmp != NULL && tmp->order != order)
		tmp = tmp->next;
	return(position);
}
