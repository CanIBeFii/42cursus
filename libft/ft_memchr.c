#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n){
	size_t			i;

	i = 0;
	while(*(unsigned char*)(s + i) != '\0' && 
			*(unsigned char*)(s + i) != c && i < n){
		i++;
	}
	if(*(unsigned char*)(s + i) != c || i == n)
		return (NULL);
	return (s + i);
}