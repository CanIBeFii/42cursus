/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_X.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:47:17 by filipe            #+#    #+#             */
/*   Updated: 2022/05/10 17:47:18 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int format_X(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	return (ft_convert_hex((unsigned long)num, 0));
}
