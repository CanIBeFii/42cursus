/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:57:19 by fialexan          #+#    #+#             */
/*   Updated: 2022/04/29 11:53:22 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*prt;

	prt = (void *)malloc(count * size);
	if (!prt)
		return (NULL);
	ft_bzero(prt, count * size);
	return (prt);
}
