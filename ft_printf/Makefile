# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 10:35:50 by fialexan          #+#    #+#              #
#    Updated: 2022/04/11 12:11:02 by fialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS = ft_printf.c

OBJS = $(SCRS:.c=.o)

BONUS = 

BONUS_OBJS = $(BONUS:.c=.o)

NAME = libftprintf.a

LIBFT_DIR = libft
CFLAGS = -Wall -Werror -Wextra -c

all: ${NAME}
	
${NAME}: $(OBJS)
	make -C $(LIBFT_DIR)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SCRS)
	gcc $(CFLAGS) $(SCRS) 

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)