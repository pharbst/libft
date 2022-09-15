/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:46:15 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:46:15 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (dest || src)
	{
		if (d < s)
			while (n--)
				*d++ = *s++;
		else
		{
			s = src + (n - 1);
			d = dest + (n - 1);
			while (n--)
				*d-- = *s--;
		}
	}
	return (dest);
}
