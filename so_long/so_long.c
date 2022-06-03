/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:55:58 by fialexan          #+#    #+#             */
/*   Updated: 2022/06/03 13:40:12 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/so_long.h"

int	main(void)
{
	void	*mlx;
	t_data	img;

	mlx = mlx_init();
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img);
	mlx_loop(mlx);
}
