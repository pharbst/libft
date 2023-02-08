/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strftrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:31:04 by pharbst           #+#    #+#             */
/*   Updated: 2023/02/09 00:19:11 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftio.h"

char	*ft_strftrim(char *str, int (*function)(int))
{
	int		start_index;
	int		end_index;
	char	*ret;

	start_index = 0;
	end_index = 0;
	if (!str || !function)
		return (NULL);
	while (function(str[start_index]))
		start_index++;
	while (str[end_index])
		end_index++;
	end_index--;
	while (function(str[end_index]))
		end_index--;
	ret = ft_substr(str, start_index, end_index - start_index + 1);
	return (free(str), ret);
}
