#include "libft.h"

void	*memset(void *s, int c, size_t n){
	int	i;

	i = 0;
	while(i < n){
		*(unsigned char*)(s + i) = c;
		i++;
	}
	return (s);
}