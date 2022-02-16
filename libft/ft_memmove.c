#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n){
	char		*tmp;
	size_t		i;

	tmp = (char*)src;
	i = -1;
	while(++i < n)
		*(char*)(dest + i) = *(tmp + i);
	return (dest);
}