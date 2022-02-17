/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:59:43 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 11:01:16 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i) &&
			*(unsigned char *)(s1 + i) != '\0' &&
			*(unsigned char *)(s2 + i) != '\0' && i < n - 1)
			i++;
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
