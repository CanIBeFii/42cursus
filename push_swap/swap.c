/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:45:34 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/16 13:55:26 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*mem;

	tmp = stackbefore_last(*stack);
	mem = tmp->next;
	tmp->next = mem->next;
	mem->next = NULL;
}
