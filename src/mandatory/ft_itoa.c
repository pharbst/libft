/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:44:32 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:44:32 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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

static char	*ft_420(long n, char neg)
{
	char	a[20];
	char	digit;
	int		i;

	i = 0;
	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
		a[i++] = digit + '0';
	}
	if (neg == 1)
		a[i++] = '-';
	a[i] = '\0';
	return (ft_reverse(a));
}

char	*ft_itoa(int n)
{
	char	*a;
	char	neg;
	long	n2;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	n2 = n;
	if (n < 0)
	{
		neg = 1;
		n2 *= -1;
	}
	a = ft_420(n2, neg);
	return (a);
}
