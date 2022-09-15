/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:46:47 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:46:47 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(char *str, int ch)
{
	if (!str)
		return (NULL);
	while (*str != ((unsigned char)ch))
		if (*str++ == '\0')
			return (NULL);
	return (str);
}
