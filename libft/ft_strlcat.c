#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size){
	size_t	dst_size;
	size_t	i;

	dst_size = -1;
	i = 0;
	while(dest[++i] != '\0');
	while(i < size - 1 && src[i] != '\0'){
		dest[i + dst_size] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i + dst_size);
}