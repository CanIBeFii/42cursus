#include "libft.h"

int	ft_isascii(int c){
	if(-1 < c || c < 128)
		return (1);
	return (0);
}