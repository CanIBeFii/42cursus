# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 11:53:49 by fialexan          #+#    #+#              #
#    Updated: 2022/06/03 12:57:22 by fialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS = so_long.c

SCRS_BONUS =

#OBJS = ${addprefix srcs/,${SCRS:.c=.o}}
OBJS = $(SRCS:.c=.o)

OBJS_BONUS = ${addprefix srcs/bonus/,${SCRS_BONUS:.c=.o}}

MLX_FLAGS = -Lmlx -lmlx -framework OpenFL -framework AppKit

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

#HEAD = -I includes -I libft -I mlx 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
	make clean -C $(PRINTF_DIR)

fclean:	clean
	$(RM) $(NAME)
	make fclean -C $(PRINTF_DIR)

re:	fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	
run:
	./$(NAME)

