/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:39:23 by fialexan          #+#    #+#             */
/*   Updated: 2022/04/04 13:09:40 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

char	*ft_read(int fd)
{
	char	*str;
	size_t	size_read;

	str = malloc(sizeof(char) * BUFFER_SIZE + 1);
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

char	*ft_get_before_nl(char *str)
{
	char	*ret;
	int		size;
	int		index;

	index = 0;
	size = 0;
	while (str[size] && str[size] != '\n')
		size++;
	ret = malloc(sizeof(char) * (size + 2));
	if (!ret)
		return (NULL);
	while (index <= size)
	{
		ret[index] = str[index];
		index++;
	}
	ret[index] = '\0';
	return (ret);
}

char	*ft_get_after_nl(char *str)
{
	char	*ret;
	int		index;
	int		start;

	start = 0;
	index = 0;
	while (str[start] && str[start] != '\n')
		start++;
	ret = malloc(sizeof(char) * (ft_strlen(str) - start + 1));
	if (!ret)
		return (NULL);
	if (str[start] == '\n')
		start++;
	while (str[start + index])
	{
		ret[index] = str[start + index];
		index++;
	}
	ret[index] = '\0';
	// free(str);
	return (ret);
}

char	*ft_get_next_nl(char *str, int fd)
{
	char	*tmp;
	char	*ret;

	ret = str;
	while (!ft_findchar(ret, '\n'))
	{
		tmp = ft_read(fd);
		if (!tmp)
			return (ret);
		str = ret;
		ret = ft_strjoin(str, tmp);
		free(str);
		free(tmp);
	}
	return (ret);
}

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
	{
		ret = str;
		str = ft_get_next_nl(ret, fd);
	}
	tmp = ft_get_after_nl(str);
	ret = ft_get_before_nl(str);
	free(str);
	str = tmp;
	return (ret);
}

#include <fcntl.h>

int main(void)
{
	int	fd;

	fd = open("/Users/fialexan/42cursus/get_next_line/gnlTester/files/42_with_nl", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}
