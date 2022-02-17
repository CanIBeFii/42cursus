/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:32:59 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 12:39:40 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	putnbr_numsize(int n)
{
	int			size;
	size_t		num;

	if (n == 0)
		return (1);
	num = n;
	size = 0;
	if (num < 0)
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

char	*putnbr_itoa(int n)
{
	char		str[12];
	int			size;
	size_t		num;

	size = putnbr_numsize(n);
	num = n;
	if (num < 0)
		str[0] = '-';
	while (num > 0)
	{
		str[size - 2] = num % 10;
		num = num / 10;
		size--;
	}
	str[putnbr_numsize(n)] = '\0';
	return (str);
}


void	ft_putnbr_fd(int n, int fd)
{
	size_t	num;
	char	str[12];

	str = putnbr_itoa(n);
	ft_putstr_fd(str, fd);
}
