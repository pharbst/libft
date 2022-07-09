/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:41:41 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/09 11:42:40 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static char	*ft_reverse(char *a)
{
	int		i;
	int		len;
	char	*ret;

	i = 0;
	len = ft_strlen(a);
	ret = malloc((len + 1) * sizeof(char));
	while (len--)
		ret[i++] = a[len];
	ret[i] = '\0';
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
