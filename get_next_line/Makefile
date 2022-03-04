# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 16:13:48 by fialexan          #+#    #+#              #
#    Updated: 2022/03/04 09:50:28 by fialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS = get_next_line.c get_next_line_utils.c 

OBJS = $(SCRS:.c=.o)

BONUS = 

BONUS_OBJS = $(BONUS:.c=.o)

NAME = gnl

CFLAGS = -Wall -Werror -Wextra -g -c -D BUFFER_SIZE=10

all: ${NAME}

${NAME}: ${OBJS}
	