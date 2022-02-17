/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:57:19 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 10:57:33 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*prt;

	prt = malloc(nmemb * size);
	if (!prt)
		return (NULL);
	ft_bzero(prt, nmemb * size);
	return (prt);
}
