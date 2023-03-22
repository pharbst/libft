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

char	*ft_strjoinfree(char *str1, char *str2)
{
	size_t	len1;
	size_t	len2;
	char	*dest;

	if (!str1)
	{
		if (!str2 || !*str2)
			return (NULL);
		return (ft_strdup(str2));
	}
	if (!str2)
		return (str1);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	dest = malloc((len1 + len2 + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, str1, (len1 + 1));
	ft_memcpy((dest + len1), str2, (len2 + 1));
	free(str1);
	return (dest);
}
