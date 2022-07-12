/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:23:55 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/12 18:37:59 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

long long	ft_atoui(char *src)
{
	long long	ret;
	int			digit;

	if (!src)
		return (-1);
	if (!ft_isdigit(*src))
		return (-1);
	ret = 0;
	while (ft_isdigit(*src))
	{
		digit = *src - '0';
		ret = (10 * ret) + digit;
		src++;
	}
	if (ft_strchr("+-", *src))
		return (-1);
	return (ret);
}
