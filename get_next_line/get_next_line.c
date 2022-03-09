/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:39:23 by fialexan          #+#    #+#             */
/*   Updated: 2022/03/09 14:07:56 by fialexan         ###   ########.fr       */
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

char	*ft_get_before_endl(char *str)
{
	size_t	index;
	size_t	i;
	char	*tmp;

	index = 0;
	while (str[index] && str[index] != '\n')
		index++;
	tmp = (char *)malloc(sizeof(char) * (index + 2));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i <= index)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	*ft_get_after_endl(char *str)
{
	size_t	start;
	size_t	i;
	char	*tmp;

	start = 0;
	i = 0;
	while (str[start] && str[start] != '\n')
		start++;
	start++;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) - start + 1));
	if (!tmp)
		return (NULL);
	while (str[start + i])
	{
		tmp[i] = str[start + i];
		i++;
	}
	free(str);
	tmp[start + i] = '\0';
	return (tmp);
}

char	*ft_read_next_line(char *str, int fd)
{
	char	*tmp;
	char	*ptr;
	char	*ret;

	ret = str;
	while (!ft_findchar(ret, '\n'))
	{
		tmp = ft_read(fd);
		if (!tmp)
			return (ret);
		ptr = ret;
		ret = ft_strjoin(ptr, tmp);
		free(ptr);
		free(tmp);
	}
	return (ret);
}
// char	*ft_strbreak(char *str, size_t size)
// {
// 	char	*ret;
// 	char	*tmp;
// 	size_t	index1;
// 	size_t	index2;
// 	size_t	str_len;

// 	index1 = -1;
// 	index2 = -1;
// 	str_len = ft_strlen(str);
// 	if (size == 0)
// 		ret = (char *)malloc(sizeof(char) * (2));
// 	else
// 		ret = (char *)malloc(sizeof(char) * (size));
// 	if (!ret)
// 		return (NULL);
// 	tmp = (char *)malloc(sizeof(char) * (str_len - size + 1));
// 	if (!tmp)
// 		return (NULL);
// 	while (++index1 <= size)
// 		ret[index1] = str[index1];
// 	ret[index1] = '\0';
// 	while (++index2 + index1 < str_len)
// 		tmp[index2] = str[index1 + index2];
// 	tmp[index2] = '\0';
// 	str = tmp;
// 	return (ret);
// }

// char	*get_next_line(int fd)
// {
// 	static char	*str;
// 	char		*tmp;
// 	char		*ret;
// 	size_t		index;

// 	if (fd < 0 || BUFFER_SIZE < 1)
// 		return (NULL);
// 	while (ft_findchar(str, '\n'))
// 	{
// 		tmp = ft_read(fd);
// 		if (!tmp)
// 		{
// 			if (str)
// 				index = ft_strlen(str);
// 			else
// 				return (NULL);
// 			continue ;
// 		}
// 		ret = str;
// 		str = ft_strjoin(ret, tmp);
// 	}
// 	ret = ft_strbreak(str, index);
// 	return (ret);
// }

char	*get_next_line(int fd)
{
	static char	*str;
	char		*tmp;
	char		*ret;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	tmp = ft_read(fd);
	ret = str;
	str = ft_strjoin(ret, tmp);
	if (tmp)
		free(tmp);
	if (ret)
		free(ret);
	if (!str || str[0] == '\0')
		return (NULL);
	if (!ft_findchar(str, '\n'))
		str = ft_read_next_line(str, fd);
	ret = ft_get_before_endl(str);
	tmp = str;
	str = ft_get_after_endl(tmp);
	return (ret);
}

#include <fcntl.h>

int main(void)
{
	int	fd;

	fd = open("/Users/fialexan/42cursus/get_next_line/gnlTester/files/41_no_nl", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	close(fd);
	return (0);
}
