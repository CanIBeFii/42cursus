/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:44:22 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/05 14:23:24 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_d(va_list args)
{
	char	*num;
	int		n;

	n = va_arg(args, int);
	num = ft_itoa(n);
	ft_putstr_fd(num, 1);
	n = ft_strlen(num);
	free(num);
	return (n);
}
