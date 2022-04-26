/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fialexan <fialexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:41:22 by fialexan          #+#    #+#             */
/*   Updated: 2022/04/26 15:00:27 by fialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_read(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*find_new_line(char *str, int fd);
char	*ft_strdup(char *s);
char	*get_before_nl(char *s);
char	*ft_substr(char *s, int start, int len);
int		ft_findchar(char *str, char c);
int		ft_strlen(char *str);

#endif
