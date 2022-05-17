/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:41:29 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 21:41:31 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

char	*ft_strlower(char *str)
{
	size_t	n;

	n = 0;
	while (str[n])
	{
		str[n] = ft_tolower((int) str[n]);
		n++;
	}
	return (str);
}
