/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:25 by filipe            #+#    #+#             */
/*   Updated: 2022/05/27 13:42:43 by fialexan         ###   ########.fr       */
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
	int			i;
	long int	num;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
			i++;
		else
			return (0);
	}
	num = long_atoi(str);
	if (-2147483648 > num || num > 2147483647)
		return (0);
	if (check_duplicate(nums, ft_atoi(str), index) == 1)
		return (0);
	return (1);
}

long int	long_atoi(const char *str)
{
	long int	x;
	long int	a;
	long int	sinal;

	sinal = 1;
	a = 0;
	x = 0;
	while (str[x] != '\0' && (str[x] == ' ' || str[x] == 12
			|| str[x] == 10 || str[x] == 13 || str[x] == 9 || str[x] == 11))
		x++;
	while (str[x] != '\0' && (str[x] == 43 || str[x] == 45))
	{
		if (str[x + 1] == '+' || str[x + 1] == '-')
			return (0);
		else if (str[x] == '-')
			sinal *= -1;
		x++;
	}
	while (str[x] > 47 && str[x] < 58)
	{
		a = (str[x] - '0') + (a * 10);
		x++;
	}
	return (a * sinal);
}
