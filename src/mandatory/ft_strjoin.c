/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:47:02 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:47:02 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	len1;
	size_t	len2;
	char	*dest;

	if (!str1 || !str2)
		return (NULL);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	dest = malloc((len1 + len2 + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, str1, (len1 + 1));
	ft_memcpy((dest + len1), str2, (len2 + 1));
	return (dest);
}
