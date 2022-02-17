/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:13:15 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 20:21:55 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;

	i = start;
	if (len == 0)
		return (NULL);
	if (len > ft_strlen(s))
	{
		substr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		len = ft_strlen(s);
	}
	else
	{
		if ((size_t)start + len > ft_strlen(s))
			substr = (char *)malloc(sizeof(char) * (ft_strlen(s) - (size_t)start) + 1);
		else
			substr = (char *)malloc(sizeof(char) * (len + 1));
	}
	if (substr == NULL)
		return NULL;
	while (i <= len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
