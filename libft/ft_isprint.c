#include "libft.h"

int	ft_isprint(int c){
	if(31 < c && c < 127)
		return (1);
	return (0);
}