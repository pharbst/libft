/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:47:40 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:47:40 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_substr(char const *src, unsigned int index, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	n;

	if (!src)
		return (NULL);
	if (len > ft_strlen(src))
		len = ft_strlen(&src[index]);
	i = 0;
	n = ft_strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[index] && len-- && index <= n)
		dest[i++] = src[index++];
	dest[i] = '\0';
	return (dest);
}
