/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:47:27 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:47:27 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(char *src, int ch)
{
	size_t	n;

	n = ft_strlen(src) + 1;
	src = src + n - 1;
	while (n--)
	{
		if (*((unsigned char *)src) == ((unsigned char)ch))
			return (((char *)src));
		src--;
	}
	return (NULL);
}
