/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:48:27 by fialexan          #+#    #+#             */
/*   Updated: 2022/04/11 13:00:16 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		size;

	i = 0;
	size = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			size--;
			size += printf_decoder(str[i], args);
		}
		else
			ft_putchar_fd(str[i], 1);
		size++;
		i++;
	}
	va_end(args);
	return (size);
}

int	valid_format(char c)
{
	return ((c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
			|| c == 'u' || c == 'x' || c == 'X'));
}

int	printf_decoder(char c, va_list args)
{
	int	size;

	size = 0;
	if (valid_format(c))
	{
		size = print_format(c, args);
	}
	else
	{
		ft_putchar_fd(c, 1);
		size++;
	}
	return (size);
}

int	print_format(char c, va_list args)
{
	if (c == 'c')
		return (format_c(args));
	if (c == 's')
		return (format_s(args));
	if (c == 'p')
		return (format_p(args));
	if (c == 'd')
		return (3);
	if (c == 'i')
		return (4);
	if (c == 'u')
		return (5);
	if (c == 'x')
		return (6);
	if (c == 'X')
		return (7);
	return (0);
}
