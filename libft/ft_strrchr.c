#include "libft.h"

char	*ft_strrchr(const char *s, int c){
	int	i;
	int	ret;

	i = 0;
	ret = -1;
	while(s[i] != '\0'){
		if(s[i] == c)
			ret = i;
		i++;
	}
	if(i != -1)
		return ((char*)s + ret);
	return (NULL);
}