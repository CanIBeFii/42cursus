/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:39:23 by fialexan          #+#    #+#             */
/*   Updated: 2022/03/08 13:12:48 by filipe           ###   ########.fr       */
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
	tmp = (char *)malloc(sizeof(char) * (index + 1));
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
		ret = (char *)malloc(sizeof(char) * (size));
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
			continue ;
		}
		ret = str;
		str = ft_strjoin(ret, tmp);
		index = ft_findchar(str, '\n');
		// printf("A string esta assim =%s\n", str);
	}
	ret = ft_strbreak(str, index);
	return (ret);
}

#include <fcntl.h>

int main(void)
{
	int	fd;

	fd = open("/home/filipe/GitHub/42cursus/get_next_line/gnlTester/files/nl", O_RDONLY);
	printf("deu open e o fd=%d\n", fd);
	get_next_line(fd);
	get_next_line(fd);
	close(fd);
	return (0);
}
