/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:05:07 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/18 10:22:18 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	i;

	dst_size = 0;
	i = 0;
	if (size == 0)
		return (size + ft_strlen(src));
	while (dest[i] != '\0')
		i++;
	while (dst_size < size - 1 && src[dst_size] != '\0')
	{
		dest[i + dst_size] = src[dst_size];
		dst_size++;
	}
	dest[i + dst_size] = '\0';
	return (size + ft_strlen(src));
}
