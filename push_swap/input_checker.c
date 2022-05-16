/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:25 by filipe            #+#    #+#             */
/*   Updated: 2022/05/16 12:46:53 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*check_input(int argc, char **argv)
{
	int	i;
	int	*nums;

	if (argc == 1)
		return (0);
	i = 0;
	nums = malloc(sizeof(int) * (argc - 1));
	if (!nums)
		return (NULL);
	while (++i < argc)
	{
		if (check_int(nums, i, argv[i]) == 0)
		{
			free(nums);
			return (NULL);
		}
		nums[i - 1] = ft_atoi(argv[i]);
	}
	return (nums);
}

int	check_duplicate(int *nums, int n, int index)
{
	int	i;

	i = 0;
	while (i < index - 1)
	{
		if (nums[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	check_int(int *nums, int index, char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
			i++;
		else
			return (0);
	}
	if (check_duplicate(nums, ft_atoi(str), index) == 1)
		return (0);
	return (1);
}
