/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:10:27 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 11:11:08 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	if (!little)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0]){
			while (little[i + e] != '\0' && little[e] == big[i + e]
				&& i + e < len)
				e++;
			if (little[e] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
