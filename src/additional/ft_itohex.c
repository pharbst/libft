/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:41:23 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 21:41:23 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

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

static char	*ft_convert(unsigned long i, char neg)
{
	char	ret[33];
	int		n;

	n = 0;
	while (i > 0)
	{
		if ((i % 16) >= 10)
			ret[n] = (i % 16) + ('a' - 10);
		else
			ret[n] = (i % 16) + '0';
		i /= 16;
		n++;
	}
	if (neg == 1)
		ret[n++] = '-';
	ret[n] = '\0';
	return (ft_reverse(ret));
}

char	*ft_itohex(unsigned long i)
{
	char		neg;
	char		*ret;

	neg = 0;
	if (i == 0)
		return (ft_strdup("0"));
	ret = ft_convert(i, neg);
	return (ret);
}
