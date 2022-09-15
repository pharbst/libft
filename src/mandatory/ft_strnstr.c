/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:47:21 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:47:21 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *src, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = len;
	if (*substr == '\0')
		return ((char *)src);
	while (*src != '\0' && len--)
	{
		if ((!ft_strncmp(src, substr, ft_strlen(substr))))
		{
			if ((i + ft_strlen(substr)) <= j)
				return ((char *)src);
		}
		src++;
		i++;
	}
	return (NULL);
}
