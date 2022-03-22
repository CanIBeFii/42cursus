/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:26:24 by fialexan          #+#    #+#             */
/*   Updated: 2022/03/22 09:54:18 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_read(int fd);
char	*ft_get_before_nl(char *str);
char	*ft_get_after_nl(char *str);
char	*ft_get_next_nl(char *str, int fd);
char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
size_t	ft_findchar(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);


#endif
