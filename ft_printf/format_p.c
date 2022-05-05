/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:59:12 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/05 14:34:04 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_p(va_list args)
{
	unsigned long	adr;
	int				res;

	adr = (unsigned long) va_arg(args, void *);
	res = ft_convert_hex(adr, 1);
	return (res);
}
