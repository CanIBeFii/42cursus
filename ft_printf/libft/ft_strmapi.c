/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:40:14 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 11:55:50 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s, ft_strlen((char *)s) + 1);
	while (str[i] != '\0')
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
