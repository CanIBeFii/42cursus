/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:02:50 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/30 12:21:56 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
