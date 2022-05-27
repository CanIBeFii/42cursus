/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:13:18 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/27 13:41:50 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **stack_a, t_stack **stack_b, int argc)
{
	int	i;
	int	e;
	int	n_bits;

	n_bits = 0;
	i = 0;
	while ((argc >> n_bits) != 0)
		n_bits++;
	while (i < n_bits && is_sorted(stack_a) == 0)
	{
		e = 0;
		while (e < argc + 1)
		{
			if ((((*stack_a)->order >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			e++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
