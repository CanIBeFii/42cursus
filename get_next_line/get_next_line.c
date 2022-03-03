/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:39:23 by fialexan          #+#    #+#             */
/*   Updated: 2022/03/03 17:05:19 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd)
{
	char	*str;
	size_t	size_read;

	str = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	size_read = read(fd, str, BUFFER_SIZE);
	return (str);
}

char	*get_next_line(int fd)
{
	char	*tmp;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	tmp = read(fd, tmp, BUFFER_SIZE);
}
