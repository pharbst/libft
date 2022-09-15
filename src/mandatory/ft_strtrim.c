/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:47:35 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:47:35 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

static int	ft_charchr(const char *str, char ch)
{
	while (*str != ch)
	{
		str++;
		if (*str == '\0')
			return (0);
	}
	return (1);
}

char	*ft_strtrim(char const *src, char const *set)
{
	int		i;
	int		j;
	int		size;
	char	*dest;

	if (*set == '\0')
		return (ft_strdup(src));
	i = 0;
	if (!src)
		return (NULL);
	j = (int)ft_strlen(src) - 1;
	while (ft_charchr(set, src[i]) && src[i] != '\0')
		i++;
	while (ft_charchr(set, src[j]) && j != 0)
		j--;
	size = j - i;
	if (size < 0)
		return (ft_strdup(""));
	dest = ft_substr(src, i, size + 1);
	return (dest);
}
