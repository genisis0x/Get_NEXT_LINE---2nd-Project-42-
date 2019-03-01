/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:00:12 by maparmar          #+#    #+#             */
/*   Updated: 2019/03/01 12:17:39 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <unistd.h>

# define BUFF_SIZE 1
# define MAX_FD 4864

int		get_next_line(const int fd, char **line);
int		ft_new_line(char **s, char **line, int fd, int ret);
#endif
