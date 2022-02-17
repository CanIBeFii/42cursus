# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 12:27:56 by fialexan          #+#    #+#              #
#    Updated: 2022/02/17 12:40:23 by fialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_substr.c ft_tolower.c \
		ft_toupper.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strnstr.c \
		ft_strdup.c ft_strjoin.c ft_strtim.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strtim.c
OBJS = $(SCRS:.c=.o)

BONUS = 

BONUS_OBJS = $(BONUS:.c=.o)

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra -c

all: ${NAME}
	
${NAME}: $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SCRS)
	gcc $(CFLAGS) $(SCRS) 

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re:
	fclean all

bonus:
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)