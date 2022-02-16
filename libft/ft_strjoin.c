#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2){
	size_t	i;
	size_t	e;
	char	*str;

	i = -1;
	e = -1;
	str = (char*)malloc(sizeof(char) * 
			(ft_strlen((char*)s1) + ft_strlen((char*)s2)) + 1);
	if(!str)
		return (NULL);
	while(*(char*)(s1 + ++i) != '\0')
		str[i] = *(char*)(s1 + i);
	while(*(char*)(s2 + ++e) != '\0')
		str[i + e] = *(char*)(s2 + e);
	str[i + e] = '\0';
	return (str);
}