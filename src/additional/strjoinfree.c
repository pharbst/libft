/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoinfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:25:51 by pharbst           #+#    #+#             */
/*   Updated: 2023/03/26 06:11:30 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftio.h"

char	*strjoinfree(char *s1, char *s2)
{
	char	*str;

	if (!s1)
	{
		if (!s2)
			return (NULL);
		return (s2);
	}
	if (!s2)
		return (s1);
	str = ft_strjoin(s1, s2);
	return (free(s1), free(s2), str);
}
