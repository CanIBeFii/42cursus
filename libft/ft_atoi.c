/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:44:03 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 19:10:01 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ' || (8 < c && c < 14))
		return (1);
	return (0);
}

int	ft_atoi(const char *ptr)
{
	int	i;
	int	signal;
	int	res;

	i = 0;
	signal = 1;
	res = 0;
	while (ptr[i] != '\0' && ft_isspace(ptr[i]))
		i++;
	while (ptr[i] != '\0' && (ptr[i] == '+' || ptr[i] == '-'))
	{
		if (ptr[i + 1] == '-' || ptr[i + 1] == '+')
			return (0);
		if (ptr[i] == '-')
			signal *= -1;
		i++;
	}
	while (ft_isdigit(ptr[i]))
	{
		res *= 10;
		res += ptr[i] - '0';
		i++;
	}
	return (signal * res);
}
