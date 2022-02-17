/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:11:18 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 11:11:55 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	ret;

	i = 0;
	ret = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			ret = i;
		i++;
	}
	if (i != -1)
		return ((char *)s + ret);
	return (NULL);
}
