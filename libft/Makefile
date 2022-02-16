SCRS = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_substr.c ft_tolower.c \
		ft_toupper.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra -c -std=c99

all: ${NAME}
	
${NAME}:
	gcc -o ${NAME} -Wall -Werror -Wextra -std=c99 -g -fsanitize=address *.c 

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all
