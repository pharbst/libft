/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:24:16 by pharbst           #+#    #+#             */
/*   Updated: 2022/11/09 14:25:28 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftio.h"

void	ft_free_split(char **src)
{
	int	i;

	i = 0;
	if (!src)
		return ;
	while (src[i])
	{
		free(src[i]);
		i++;
	}
	free(src);
}
