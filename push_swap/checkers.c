/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:25 by filipe            #+#    #+#             */
/*   Updated: 2022/05/10 18:51:39 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*check_input(int argc, char **argv)
{
	int	i;
	int	*nums;
	int	n;

	if (argc == 1)
		return (0);
	i = 1;
	nums = malloc(sizeof(int) * (argc - 1));
	if (!nums)
		return (NULL);
	while (i <= argc)
	{
		if (check_int(argv[i]) == 0)
			return (NULL);
		n = ft_atoi(argv[i]);
		if (check_duplicate(nums, n, i) == 1)
			return (NULL);
		i++;
	}
	return (nums);
}

int	check_duplicate(int *nums, int n, int argc)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (nums[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	check_int(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] || str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
