/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:24:26 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/16 15:18:27 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

char	*ft_strjoinchar(char *str, int c)
{
	char	*ret_str;
	int		i;

	if (!str)
	{
		ret_str = malloc(2 * sizeof(char));
		if (!ret_str)
			return (NULL);
		*ret_str = c;
		ret_str[1] = '\0';
		return (ret_str);
	}
	ret_str = malloc((ft_strlen(str) + 2) * sizeof(char));
	if (!ret_str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ret_str[i] = str[i];
		i++;
	}
	ret_str[i++] = c;
	ret_str[i] = '\0';
	free(str);
	return (ret_str);
}
