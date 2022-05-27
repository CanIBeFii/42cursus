/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:21 by filipe            #+#    #+#             */
/*   Updated: 2022/05/27 12:33:05 by fialexan         ###   ########.fr       */
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

long int	long_atoi(const char *str);
void		error_found(void);

int			*check_input(int argc, char **argv);
int			check_duplicate(int *nums, int n, int index);
int			check_int(int *nums, int index, char *str);
int			*get_order(int *nums, int argc);

t_stack		*init_stack(int *nums, int *nums_order, int argc);
void		free_stack(t_stack **stack);

t_stack		*stacklast(t_stack *stack);
t_stack		*stackbefore_last(t_stack *stack);
t_stack		*stacknew(int data, int order);
void		stackadd_back(t_stack **stack, t_stack *new);
void		stackadd_front(t_stack **stack, t_stack*new);

int			is_sorted(t_stack **stack);
int			get_position(t_stack **stack, int order);
int			get_position_order(t_stack **stack, int order);
int			get_position_betweeen_num(t_stack **stack, int start, int end);
int			stack_size(t_stack **stack);

void		swap(t_stack **stack);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);

void		rotate(t_stack **stack);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rotate_x_times(t_stack **stack, int x, int stack_num);

void		reverse_rotate(t_stack **stack);
void		rrr(t_stack	**stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		r_rotate_x_times(t_stack **stack, int x, int stack_num);

void		push(t_stack **stack_sender, t_stack **stack_receiver);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);

void		solver(t_stack	**stack_a, int argc);
void		solve_2(t_stack **stack_a);
void		solve_3(t_stack **stack_a);
void		solve_4(t_stack **stack_a, t_stack **stack_b);
void		solve_5(t_stack	**stack_a, t_stack **stack_b);
void	solve_5_put_in_order(t_stack **stack_a, t_stack **stack_b, int pos);

#endif
