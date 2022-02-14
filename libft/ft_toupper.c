#include "libft.h"

int	ft_toupper(int c){
	if(96 < c && c < 123)
		return (c - 32);
	return (c);
}