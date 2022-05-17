/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:18:37 by peter             #+#    #+#             */
/*   Updated: 2022/04/18 19:08:55 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_atoi(const char *src)
{
	int	i;
	int	digit;
	int	neg;

	while (*src == 9 || *src == 32 || *src == '\t' || *src == '\n'
		|| *src == '\r' || *src == '\f' || *src == '\v')
		src++;
	neg = 0;
	i = 0;
	if (*src == '-')
	{
		neg++;
		src++;
	}
	else if (*src == '+')
		src++;
	while (ft_isdigit(*src))
	{
		digit = *src - '0';
		i = (10 * i) + digit;
		src++;
	}
	if (neg)
		i *= -1;
	return (i);
}
