/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:27:21 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:29:36 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	destlen;
	size_t	srclen;
	size_t	index;

	index = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen >= len)
		return (srclen + len);
	while (src[index] && index + destlen < len - 1)
	{
		dest[destlen + index] = src[index];
		index++;
	}
	dest[destlen + index] = '\0';
	return (destlen + srclen);
}
