/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:59:13 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/18 09:00:17 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n){
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}
