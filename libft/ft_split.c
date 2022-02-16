#include "libft.h"

static int ft_split_counter(char *s, char c){
	size_t	i;
	size_t	res;

	i = 0;
	res = 2;
	while(s[i] != '\0'){
		if(s[i] == c)
			res++;
		i++;
	}
}

static int	*ft_split_str_counter(char *s, char c, size_t delim){
	int		*ret;
	size_t	i;
	size_t	count;

	i = 0;
	ret = (int*)malloc(sizeof(int) * (delim - 1));
	if(!ret)
		return (ret);
	while()
}

char	**ft_split(char const *s, char c){
	size_t	delim;

	delim = ft_split_counter((char*)s, c);

}