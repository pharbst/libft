/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:53:33 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:30:38 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

size_t	ft_strlen(const char *s)
{
	size_t	strlen;

	if (!s)
		return (0);
	strlen = 0;
	while (s[strlen] != '\0')
		strlen++;
	return (strlen);
}
