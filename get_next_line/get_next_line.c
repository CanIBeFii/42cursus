/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:39:23 by fialexan          #+#    #+#             */
/*   Updated: 2022/03/07 11:26:25 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

char	*ft_read(int fd)
{
	char	*str;
	size_t	size_read;

	str = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	size_read = read(fd, str, BUFFER_SIZE);
	if (size_read <= 0 || size_read > BUFFER_SIZE)
	{
		free(str);
		return (NULL);
	}
	str[size_read] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*tmp;
	size_t	index_s1;
	size_t	index_s2;

	index_s1 = 0;
	index_s2 = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tmp)
		return (NULL);
	while (s1 && s1[index_s1])
	{
		tmp[index_s1] = s1[index_s1];
		index_s1++;
	}
	free(s1);
	while (s2 && s2[index_s2])
	{
		tmp[index_s1 + index_s2] = s2[index_s2];
		index_s2++;
	}
	free(s2);
	tmp[index_s1 + index_s2] = '\0';
	return (tmp);
}

size_t	ft_findchar(char *str, char c)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

char	*ft_strbreak(char *str, size_t size)
{
	char	*ret;
	char	*tmp;
	size_t	index1;
	size_t	index2;
	size_t	str_len;

	index1 = -1;
	index2 = -1;
	str_len = ft_strlen(str);
	if (size == 0)
		ret = (char *)malloc(sizeof(char) * (2));
	else
		ret = (char *)malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (str_len - size + 1));
	if (!tmp)
		return (NULL);
	while (++index1 <= size)
		ret[index1] = str[index1];
	ret[index1] = '\0';
	while (++index2 + index1 < str_len)
		tmp[index2] = str[index1 + index2];
	tmp[index2] = '\0';
	free(str);
	str = tmp;
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*tmp;
	char		*ret;
	long		index;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	index = -1;
	while (index == -1)
	{
		tmp = ft_read(fd);
		if (!tmp)
		{
			if (str)
				index = ft_strlen(str);
			else
				return (NULL);
		}
		str = ft_strjoin(str, tmp);
		index = ft_findchar(str, '\n');
		// printf("A string esta assim =%s\n", str);
	}
	ret = ft_strbreak(str, index);
	return (ret);
}

// #include <fcntl.h>

// int main(void)
// {
// 	int	fd;

// 	fd = open("/Users/fialexan/42cursus/get_next_line/test.txt", O_RDONLY);
// 	printf("deu open e o fd=%d\n", fd);
// 	get_next_line(fd);
// 	get_next_line(fd);
// 	close(fd);
// 	return (0);
// }
