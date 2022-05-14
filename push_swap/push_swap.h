/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:21 by filipe            #+#    #+#             */
/*   Updated: 2022/05/12 12:43:16 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_printf/ft_printf.h"

typedef struct s_stack {
	int	data;
	int	order;
	struct s_stack *next;
}	t_stack;

int			*check_input(int argc, char **argv);
int			*get_order(int *nums, int argc);
int			check_int(char *str);
int			check_duplicate(int *nums, int n, int argc);
t_stack		*init_stack(int *nums, int *nums_order, int argc);
t_stack		*stacklast(t_stack *stack);
t_stack		*stacknew(int data, int order);
void		stackadd_back(t_stack **stack, t_stack *new);
void		stackadd_front(t_stack **stack, t_stack*new);


#endif
