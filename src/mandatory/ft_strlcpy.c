/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:49:39 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:30:21 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

size_t	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		return (ft_strlen(src));
	while (src[count] && count < n - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (ft_strlen(src));
}
