/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:31 by filipe            #+#    #+#             */
/*   Updated: 2022/05/26 11:35:31 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*nums;
	int		*nums_order;
	t_stack	*stack_a;

	if (argc == 1)
		return (0);
	nums = check_input(argc, argv);
	if (!nums)
	{
		error_found();
		return (0);
	}
	nums_order = get_order(nums, argc);
	if (!nums_order)
	{
		error_found();
		return (0);
	}
	stack_a = init_stack(nums, nums_order, argc);
	solver(&stack_a, argc - 1);
	return (0);
}

int	*get_order(int *nums, int argc)
{
	int	tmp;
	int	*nums_order;
	int	i;
	int	e;

	i = -1;
	nums_order = malloc(sizeof(int) * (argc - 1));
	if (!nums_order)
		return (NULL);
	while (++i < (argc - 1))
	{
		e = -1;
		tmp = 0;
		while (++e < (argc - 1))
		{
			if (e != i && nums[e] < nums[i])
				tmp++;
		}
		nums_order[i] = tmp;
	}
	return (nums_order);
}

void	error_found(void)
{
	ft_putendl_fd("Error", 2);
}
