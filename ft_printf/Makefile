# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 10:35:50 by fialexan          #+#    #+#              #
#    Updated: 2022/05/19 12:11:43 by fialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS = ft_printf.c format_c.c format_d.c format_i.c format_p.c format_s.c \
		format_u.c format_x_small.c format_x_big.c convert_hex.c

OBJS = $(SCRS:.c=.o)

BONUS = 

BONUS_OBJS = $(BONUS:.c=.o)

NAME = libftprintf.a

LIBFT_DIR = ./libft
LIBFT =	libft.a
CFLAGS = -Wall -Werror -Wextra

all: ${NAME}
	
${NAME}: $(OBJS)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT) $(NAME)	
	@ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SCRS)
	@gcc $(CFLAGS) -c -I $(LIBFT_DIR) $(SCRS) 

clean:
	@make clean -C $(LIBFT_DIR)
	@rm -f $(OBJS) $(BONUS_OBJS)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@rm -f $(LIBFT_DIR)/$(LIBFT)
	@rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	@ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

compile:
	@gcc $(CFLAGS) -c -I $(LIBFT_DIR) $(SCRS)
	@gcc $(CFLAGS) -I $(LIBFT_DIR) $(OBJS)