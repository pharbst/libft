/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrsfd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 03:20:24 by pharbst           #+#    #+#             */
/*   Updated: 2023/03/26 08:11:58 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftio.h"

void	ft_putstrsfd(int fd, const char *str, ...)
{
	va_list	ap;

	va_start(ap, str);
	while (str)
	{
		ft_putstr_fd(str, fd);
		str = va_arg(ap, const char *);
	}
	va_end(ap);
}
