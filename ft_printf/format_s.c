/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:54:22 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/05 14:24:03 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_s(va_list args)
{
	char	*str;
	int		i;

	str = va_arg(args, char *);
	i = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (i);
}
