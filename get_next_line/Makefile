# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 16:13:48 by fialexan          #+#    #+#              #
#    Updated: 2022/03/15 09:47:37 by fialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS = get_next_line.c get_next_line_utils.c 

OBJS = $(SCRS:.c=.o)

BONUS = 

BONUS_OBJS = $(BONUS:.c=.o)

NAME = gnl

CFLAGS = -g -Wall -Werror -Wextra -D BUFFER_SIZE=1 -o out

all: ${NAME}

${NAME}: $(OBJS)

$(OBJS): $(SCRS)
	gcc $(CFLAGS) $(SCRS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# bonus: $(OBJS) $(BONUS_OBJS)
# 	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)