/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:39:26 by fialexan          #+#    #+#             */
/*   Updated: 2022/04/26 14:59:01 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_findchar(char *str, char c)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index + 1);
		index++;
	}
	return (0);
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
	while (s2 && s2[index_s2])
	{
		tmp[index_s1 + index_s2] = s2[index_s2];
		index_s2++;
	}
	tmp[index_s1 + index_s2] = '\0';
	return (tmp);
}
