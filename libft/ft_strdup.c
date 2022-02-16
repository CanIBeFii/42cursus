#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src){
	size_t	i;

	i = 0;
	while(src[i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s){
	char	*str;

	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	str = ft_strcpy(str, s);
	return (str);
}