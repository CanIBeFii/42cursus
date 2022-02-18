/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:10:27 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/18 11:49:43 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	if (!needle)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			while (needle[i + e] != '\0' && needle[e] == haystack[i + e]
				&& i + e < len)
				e++;
			if (needle[e] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
