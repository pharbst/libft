/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrtohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 02:48:16 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/09 17:10:26 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

char	*ft_ptrtohex(void *ptr)
{
	char	str[12];
	char	*ret;

	if (!ptr)
		return ("(null)");
	str[0] = '0';
	str[1] = 'x';
	ft_memcpy(str + 2, ft_itohex((unsigned long)ptr), 10);
	ret = str;
	return (ret);
}
