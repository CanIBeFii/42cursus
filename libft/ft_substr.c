#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len){
	char			*substr;
	unsigned long	i;

	i = start;
	
	substr = (char*)malloc(sizeof(char) * len);
	if(substr == NULL)
		return NULL;
	while(i < start + len){
	substr[i - start] = s[i];
		i++; 
	}
	return  substr;
}