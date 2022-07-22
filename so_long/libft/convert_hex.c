/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:18:10 by fialexan          #+#    #+#             */
/*   Updated: 2022/07/22 17:09:43 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convert_hex(unsigned long arg, int state)
{
	if (arg > 15)
		ft_convert_hex(arg / 16, state);
	if (state)
		ft_putchar_fd("0123456789abcdef"[arg % 16], 1);
	else
		ft_putchar_fd("0123456789ABCDEF"[arg % 16], 1);
	return (ft_hex_len(arg));
}

int	ft_hex_len(unsigned long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}
