/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:41:34 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/15 17:41:48 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

char	*ft_strupper(char *str)
{
	size_t	n;

	n = 0;
	if (!str)
		return (NULL);
	while (str[n])
	{
		str[n] = ft_toupper((int) str[n]);
		n++;
	}
	return (str);
}
