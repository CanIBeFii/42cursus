/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:48:25 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/19 12:07:31 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		valid_format(char c);
int		ft_convert_hex(unsigned long arg, int state);
int		printf_decoder(char c, va_list args);
int		print_format(char c, va_list args);
int		format_c(va_list args);
int		format_s(va_list args);
int		format_p(va_list args);
int		format_d(va_list args);
int		format_i(va_list args);
int		format_u(va_list args);
int		format_x_small(va_list args);
int		format_x_big(va_list args);
int		ft_uitoa(unsigned int num);
int		ft_hex_len(unsigned long num);
int		ft_get_int_size(unsigned int num);

#endif
