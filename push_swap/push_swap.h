/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:21 by filipe            #+#    #+#             */
/*   Updated: 2022/05/10 18:56:41 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_printf/ft_printf.h"

typedef struct s_stack {
	int	data;
	struct s_stack *next;
}	t_stack;

int	*check_input(int argc, char **argv);
int	check_int(char *str);
int	check_duplicate(int *nums, int n, int argc);

#endif
