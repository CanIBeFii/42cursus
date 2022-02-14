#include "libft.h"

int	isalpha(int c){
	if((64 < c && c < 91) || (96 < c && c < 123))
		return (1);
	return (0);
}