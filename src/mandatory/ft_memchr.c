/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:46:00 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:46:00 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *src, int ch, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *)src) == ((unsigned char)ch))
			return ((unsigned char *)src);
		src++;
	}
	return (NULL);
}
