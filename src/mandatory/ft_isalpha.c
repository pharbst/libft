/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:19:24 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:33:50 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalpha(int character)
{
	if ('A' <= character && 'Z' >= character)
		return (1);
	else if ('a' <= character && 'z' >= character)
		return (2);
	else
		return (0);
}
