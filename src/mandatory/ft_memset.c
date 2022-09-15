/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:53:54 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:24:42 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = (unsigned char *) dest;
	while (len-- > 0)
		ptr[i++] = val;
	return (dest);
}
