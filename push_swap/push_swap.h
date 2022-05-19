/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:21 by filipe            #+#    #+#             */
/*   Updated: 2022/05/19 13:21:27 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack {
	int				data;
	int				order;
	struct s_stack	*next;
}	t_stack;

int			*check_input(int argc, char **argv);
int			*get_order(int *nums, int argc);
int			check_int(int *nums, int index, char *str);
int			check_duplicate(int *nums, int n, int index);
t_stack		*init_stack(int *nums, int *nums_order, int argc);
t_stack		*stacklast(t_stack *stack);
t_stack		*stacknew(int data, int order);
void		stackadd_back(t_stack **stack, t_stack *new);
void		stackadd_front(t_stack **stack, t_stack*new);

int			is_sorted(t_stack **stack);

void		swap(t_stack **stack);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);

void		rotate(t_stack **stack);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		solver(t_stack	**stack_a, int argc);
void		solve_2(t_stack **stack_a);

#endif
