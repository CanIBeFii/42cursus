/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:01:46 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 11:02:01 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp;
	size_t		i;

	tmp = (char *)src;
	i = -1;
	while (++i < n)
		*(char *)(dest + i) = *(tmp + i);
	return (dest);
}
