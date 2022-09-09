/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:15:39 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:28:40 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *src)
{
	size_t	n;
	char	*dest;

	n = ft_strlen(src) + 1;
	dest = malloc(n * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, n);
	return (dest);
}
