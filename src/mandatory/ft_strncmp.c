/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:01:04 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:30:54 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp(const char *src, const char *cmpstr, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && src[i] && cmpstr[i])
	{
		if (src[i] == cmpstr[i])
			i++;
		else
			break ;
	}
	return ((unsigned char)src[i] - (unsigned char)cmpstr[i]);
}
