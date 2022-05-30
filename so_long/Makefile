# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 11:53:49 by fialexan          #+#    #+#              #
#    Updated: 2022/05/30 12:09:40 by fialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS = so_long.c

SCRS_BONUS =

OBJS = ${addprefix srcs/,${SCRS:.c=.o}}

OBJS_BONUS = ${addprefix srcs/bonus/,${SCRS_BONUS:.c=.o}}

MLX_FLAGS = -Lmlx -lmlx -framework OpenFL -framework AppKit

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

HEAD = -I includes -I libft -I mlx 
