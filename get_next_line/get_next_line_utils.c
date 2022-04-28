/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:28:43 by fialexan          #+#    #+#             */
/*   Updated: 2022/04/28 13:17:47 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_findchar(char *str, char c)
{
	int	index;

	if (!str)
		return (-1);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i1;
	int		i2;

	if (!s1 && !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1 && s1[i1] != '\0')
	{
		str[i1] = s1[i1];
		i1++;
	}
	while (s2 && s2[i2] != '\0')
	{
		str[i1 + i2] = s2[i2];
		i2++;
	}
	str[i1 + i2] = '\0';
	return (str);
}

char	*ft_strdup(char *s)
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s);
	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (s[0] == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*substr;
	int		i;

	i = 0;
	if (ft_strlen(s) < len)
		substr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	else if (start > ft_strlen(s))
		substr = (char *)malloc(sizeof(char));
	else
		substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	while (s[start] && i < len && start < ft_strlen(s))
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
