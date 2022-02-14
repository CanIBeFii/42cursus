#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n){
	char	*tmp;
	int		i;

	i = -1;
	while(++i < n)
		*(tmp + i) = *(char*)(src + i);
	i = -1;
	while(++i < n)
		*(char*)(dest + i) = *(tmp + i);
	return (dest);
}