/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:59:12 by fialexan          #+#    #+#             */
/*   Updated: 2022/07/22 17:10:12 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	format_p(va_list args)
{
	unsigned long	adr;
	int				res;

	adr = (unsigned long) va_arg(args, void *);
	if (!adr)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_putstr_fd("0x", 1);
	res = ft_convert_hex(adr, 1);
	return (res + 2);
}
