/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:03:22 by fialexan          #+#    #+#             */
/*   Updated: 2022/05/30 12:19:41 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	e;
	char	*str;

	i = -1;
	e = -1;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char)
			* (ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1);
	if (!str)
		return (NULL);
	while (*(char *)(s1 + ++i) != '\0')
		str[i] = *(char *)(s1 + i);
	while (*(char *)(s2 + ++e) != '\0')
		str[i + e] = *(char *)(s2 + e);
	str[i + e] = '\0';
	return (str);
}
