/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:39:26 by fialexan          #+#    #+#             */
/*   Updated: 2022/03/08 13:02:40 by filipe           ###   ########.fr       */
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
			return (index);
		index++;
	}
	return (-1);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*tmp;
	size_t	index_s1;
	size_t	index_s2;

	index_s1 = 0;
	index_s2 = 0;
	
	int i = ft_strlen(s1);
	int e = ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * (i + e + 1));
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
	free(s2);
	tmp[index_s1 + index_s2] = '\0';
	return (tmp);
}
