/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:48:14 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/05 14:23:47 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_u(va_list args)
{
	unsigned int	num;
	int				arg;
	char			*str;

	arg = va_arg(args, int);
	if (arg < 0)
		num = 4294967295 + arg;
	else
		num = arg;
	str = ft_uitoa(num);
	ft_putstr_fd(str, 1);
	arg = ft_strlen(str);
	free(str);
	return (arg);
}

int	ft_get_int_size(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int num)
{
	char	*str;
	int		len;
	int		temp;

	len = ft_get_int_size(num);
	temp = len;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (num == 0)
		str[0] = '0';
	else
	{
		while (num != 0)
		{
			str[--temp] = (num % 10) + '0';
			num = num / 10;
		}
	}
	str[len] = '\0';
	return (str);
}
