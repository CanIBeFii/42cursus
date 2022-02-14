#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size){
	int	i;

	i = 0;
	while(i < size - 1 && src[i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while(src[i] != '\0')
		i++;
	return ((size_t)i);
}