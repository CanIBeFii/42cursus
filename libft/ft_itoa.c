/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:40:48 by fialexan          #+#    #+#             */
/*   Updated: 2022/02/17 10:41:41 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_numsize(int n){
	unsigned int	i;
	int				res;
	int				signal;

	if(n == -2147483648)
		return (11);
	if()
	signal = 0;
	if(n < 0){
		signal = 1;
		n *= -1;
	}
	while(n > 0){
		n = n / 10;
		res++;
	}


}

char	*ft_itoa(int n){
	char	*str;
	int		i;
	int		res;

	i = 0;
	if(n < 0)
		
}