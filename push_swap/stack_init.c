/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:35:47 by filipe            #+#    #+#             */
/*   Updated: 2022/05/12 12:42:39 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stacknew(int data, int order)
{
	t_stack	*new;
	
	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->data = data;
	new->order = order;
	new->next = NULL;
	return (new);
}

t_stack	*init_stack(int *nums, int *nums_order, int argc)
{
	t_stack	*stack;
	t_stack	*tmp;
	int		i;
	
	i = -1;
	while (++i < (arcgc - 1))
	{
		tmp = stacknew(nums[i], nums_order[i]);
		stackadd_back(tmp);
	}
	return (stack);
}
