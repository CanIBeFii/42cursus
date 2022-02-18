/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:55:40 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/18 13:26:31 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	delim_counter(char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

// Tens de eliminar os C da string para poderes contar as cenas bem

static char	**split_str(char *str, char **ret, char c)
{
	size_t	i;
	size_t	e;
	size_t	str_size;
	size_t	counter;

	counter = 0;
	e = 0;
	i = 0;
	str_size = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			ret[counter] = (char *)malloc(sizeof(char) * (str_size + 1));
			ft_strlcpy(ret[counter], &str[e], i - e);
			e = i + 1;
			counter++;
		}
		i++;
	}
	ret[counter] = (char *)malloc(sizeof(char) * (str_size + 1));
	ft_strlcpy(ret[counter], &str[e], i - e);
	ret[counter + 1] = (char *)malloc(sizeof(char));
	ret[counter + 1] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**ret;
	size_t	c_count;
	size_t	i;

	i = 0;
	str = (char *)s;
	c_count = delim_counter(str, c);
	ret = (char **)malloc(sizeof(char *) * (c_count + 1));
	ret = split_str(str, ret, c);
	return (ret);
}
