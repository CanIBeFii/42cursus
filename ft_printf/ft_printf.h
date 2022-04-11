/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:48:25 by fialexan          #+#    #+#             */
/*   Updated: 2022/04/11 12:56:05 by fialexan         ###   ########.fr       */
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
int		printf_decoder(char c, va_list args);
int		print_format(char c, va_list args);
int		format_c(va_list args);
int		format_s(va_list args);
int		format_p(va_list args);
int		format_d(va_list args);
int		format_i(va_list args);
int		format_u(va_list args);
int		format_x(va_list args);
int		format_X(va_list args);

#endif
