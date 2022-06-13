/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chartostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 01:08:24 by pharbst           #+#    #+#             */
/*   Updated: 2022/06/13 20:43:43 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_chartostr(int c)
{
	char	*ret;

	ret = malloc(2 * sizeof(char));
	if (!ret)
		return (NULL);
	ret[0] = c;
	ret[1] = '\0';
	return (ret);
}
