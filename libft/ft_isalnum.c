#include "libft.h"

int	ft_isalnum(int c){
	if((47 < c && c < 58) || (64 < c && c < 91)
		 || (96 < c && c < 123))
		return (1);
	return (0);
}