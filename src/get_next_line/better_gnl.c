/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   better_gnl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunsal <tunsal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 06:08:02 by pharbst           #+#    #+#             */
/*   Updated: 2023/12/29 22:02:05 by tunsal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libftio.h"

static char	*get_line(char *stash, char *line)
{
	if (ft_strchr(stash, '\n'))
	{
		line = strjoinfree(line, ft_substr(stash, 0, (ft_strchr(stash, '\n')
						- stash) + 1));
		ft_memmove(stash, ft_strchr(stash, '\n') + 1,
			ft_strlen(ft_strchr(stash, '\n') + 1) + 1);
	}
	else
	{
		line = ft_strjoinfree(line, stash);
		stash[0] = '\0';
	}
	return (line);
}

static char	*read_line(int fd, char *stash)
{
	int		n;
	char	*line;

	line = NULL;
	n = BUFFER_SIZE;
	while (n == BUFFER_SIZE && !ft_strchr(stash[fd], '\n'))
	{
		line = ft_strjoinfree(line, stash);
		n = read(fd, stash[fd], BUFFER_SIZE);
		if (n == -1)
			return (NULL);
		stash[n] = '\0';
	}
	return (get_line(stash[fd], line));
}

char	*gnl(int fd)
{
	static char	stash[OPEN_MAX][BUFFER_SIZE + 1];

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE < 1)
		return (NULL);
	return (read_line(fd, stash[fd]));
}
