/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:40:48 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 18:44:05 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numsize(int n)
{
	int			size;
	size_t		num;

	if (n == 0)
		return (1);
	num = n;
	size = 0;
	if (n < 0)
	{
		size++;
		num *= -1;
	}
	while (num > 0)
	{
		size++;
		num = num / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			size;
	size_t		num;

	size = numsize(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	num = n;
	if (n < 0)
		str[0] = '-';
	while (num > 0)
	{
		str[size - 2] = num % 10;
		num = num / 10;
		size--;
	}
	str[numsize(n)] = '\0';
	return (str);
}
