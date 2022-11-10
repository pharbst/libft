/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:13:35 by pharbst           #+#    #+#             */
/*   Updated: 2022/11/10 00:52:16 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

char	*ft_new_stash(char *stash)
{
	char	*new_stash;

	new_stash = NULL;
	if (stash &&!ft_strchr(stash, '\n'))
		return (free(stash), NULL);
	if (stash)
		new_stash = ft_strdup(ft_strchr(stash, '\n') + 1);
	free(stash);
	return (new_stash);
}

char	*get_line(char **stash)
{
	char	*line;
	size_t	n;

	if (!*stash)
		return (NULL);
	if (!ft_strchr(*stash, '\n'))
		return (line = ft_strdup(*stash), free(*stash), *stash = NULL, line);
	line = malloc(((ft_strchr(*stash, '\n') - *stash) + 2) * sizeof(char));
	if (!line)
		return (free(*stash), NULL);
	n = 0;
	while ((*stash)[n] != '\n')
	{
		line[n] = (*stash)[n];
		n++;
	}
	line[n++] = '\n';
	line[n] = '\0';
	return (line);
}

char	*ft_stash(int fd, char *stash)
{
	char	*buff;
	int		n;

	buff = malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (!buff)
		return (NULL);
	n = BUFFER_SIZE;
	while (n == BUFFER_SIZE && !ft_strchr(stash, '\n'))
	{
		n = read(fd, buff, BUFFER_SIZE);
		if (n == -1)
			return (free(buff), NULL);
		if (n == 0)
			return (free(buff), stash);
		buff[n] = '\0';
		stash = ft_strjoinfree(stash, buff);
	}
	free(buff);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = ft_stash(fd, stash);
	line = get_line(&stash);
	stash = ft_new_stash(stash);
	if (ft_strlen(line) > 0)
		return (line);
	return (free(line), NULL);
}
