/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:46:39 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:46:39 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
		ft_putchar_fd(*s++, fd);
}
