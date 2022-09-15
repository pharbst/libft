/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:10:24 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:16:13 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *src, const void *cmp, size_t n)
{
	while (n-- > 0)
	{
		if (*((unsigned char *)src) != *((unsigned char *)cmp))
			return (*((unsigned char *)src) - *((unsigned char *)cmp));
		src++;
		cmp++;
	}
	return (0);
}
