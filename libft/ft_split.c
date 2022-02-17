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
	return (res);
}

static int	*ft_split_str_counter(char *s, char c, size_t delim)
{
	int		*ret;
	size_t	i;
	size_t	e;
	size_t	count;

	i = -1;
	count = 0;
	e = 0;
	ret = (int *)malloc(sizeof(int) * (delim - 1));
	if (!ret)
		return (ret);
	while (s[++i] != '\0')
	{
		if (s[i] == c)
		{
			ret[e] = count;
			e++;
			count = 0;
		}
		else
			count++;
	}
	return (ret);
}

static char *ft_the_spliter(char *s, size_t index, int *str_size)
{
	int		i;
	size_t	e;
	char	*str;

	i = -1;
	while (++i < (int)index)
		e += str_size[i] + 1;
	i = 0;
	str = (char *)malloc(sizeof(char) * (str_size[index] + 1));
	while (i < str_size[i])
	{
		str[i] = s[e + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	delim;
	int		*str_size;
	size_t	i;
	char	**ret;

	i = -1;
	delim = ft_split_counter((char *)s, c);
	str_size = ft_split_str_counter((char *)s, c, delim);
	ret = (char **)malloc(sizeof(char *) * (delim));
	if (!ret)
		return (NULL);
	while (++i < delim - 1)
		ret[i] = ft_the_spliter((char *)s, i, str_size);
	ret[i] = NULL;
	free(str_size);
	return (ret);
}