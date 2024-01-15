/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   better_gnl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunsal <tunsal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 06:08:02 by pharbst           #+#    #+#             */
/*   Updated: 2024/01/15 17:52:46 by tunsal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libftio.h"

static char	*get_line(char *stash, char *line)
{
	char	*nl_char;

	nl_char = ft_strchr(stash, '\n');
	if (nl_char)
	{
		line = strjoinfree(line, ft_substr(stash, 0, (nl_char - stash) + 1));
		ft_memmove(stash, nl_char + 1, ft_strlen(nl_char + 1) + 1);
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
	while (n == BUFFER_SIZE && !ft_strchr(stash, '\n'))
	{
		line = ft_strjoinfree(line, stash);
		n = read(fd, stash, BUFFER_SIZE);
		if (n == -1)
			return (NULL);
		stash[n] = '\0';
	}
	return (get_line(stash, line));
}

char	*gnl(int fd)
{
	static char	stash[OPEN_MAX][BUFFER_SIZE + 1];

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE < 1)
		return (NULL);
	return (read_line(fd, stash[fd]));
}
