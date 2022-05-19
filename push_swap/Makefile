# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 11:27:28 by fialexan          #+#    #+#              #
#    Updated: 2022/05/19 16:20:57 by fialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS = push_swap.c stack_operations.c stack_init.c input_checker.c \
	check_sort.c push.c reverse_rotate.c rotate.c small_numbers.c \
	solver.c swap.c

OBJS = $(SCRS:.c=.o)

BONUS = 

BONUS_OBJS = $(BONUS:.c=.o)

NAME = push_swap

LIBFT_DIR = ./libft
CFLAGS = -Wall -Werror -Wextra -g

all: ${NAME}
	
${NAME}: $(OBJS)
	@make -C $(LIBFT_DIR)
	@gcc $(CFLAGS) $(OBJS) -L $(LIBFT_DIR) -lft -o $(NAME)  

$(OBJS): $(SCRS)
	@gcc $(CFLAGS) -c -I $(LIBFT_DIR) $(SCRS) 

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@make fclean -C $(LIBFT_DIR) 
	@rm -rf $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	@ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)
