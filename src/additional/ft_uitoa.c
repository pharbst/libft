/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoiu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peter <peter@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:28:09 by peter             #+#    #+#             */
/*   Updated: 2022/05/10 17:30:22 by peter            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

static char	*ft_reverse(char *a)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(a);
	str = malloc((len) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	while (len--)
		str[i++] = a[len];
	str[i] = '\0';
	return (str);
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
