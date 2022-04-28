# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 16:13:48 by fialexan          #+#    #+#              #
#    Updated: 2022/04/28 12:13:59 by fialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS = get_next_line.c get_next_line_utils.c 

OBJS = $(SCRS:.c=.o)

BONUS = 

BONUS_OBJS = $(BONUS:.c=.o)

NAME = gnl

CFLAGS = -g -Wall -Werror -Wextra -D BUFFER_SIZE=1

all: ${NAME}

${NAME}: $(OBJS)

$(OBJS): $(SCRS)
	gcc $(CFLAGS) $(SCRS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

val:
	valgrind --leak-check=full --show-leak-kinds=all ./a.out
# bonus: $(OBJS) $(BONUS_OBJS)
# 	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)