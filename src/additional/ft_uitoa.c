/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:41:41 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/01 02:55:47 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static char	*ft_reverse(char *a)
{
	int		i;
	int		len;
	char	str[10];
	char	*ret;

	i = 0;
	len = ft_strlen(a);
	while (len--)
		str[i++] = a[len];
	str[i] = '\0';
	ret = str;
	return (ret);
}

static char	*ft_420(unsigned int n)
{
	char	a[11];
	char	digit;
	int		i;

	i = 0;
	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
		a[i++] = digit + '0';
	}
	a[i] = '\0';
	return (ft_reverse(a));
}

char	*ft_uitoa(unsigned int n)
{
	char	*retstr;

	if (n == 0)
		return (ft_strdup("0"));
	retstr = ft_420(n);
	return (retstr);
}
