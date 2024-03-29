/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:46:19 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:33:25 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

int	ft_tolower(int ch)
{
	if (ch <= 'Z' && ch >= 'A')
		ch += 32;
	return (ch);
}
