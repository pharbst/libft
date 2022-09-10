/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:25:06 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/10 15:16:04 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftio.h"

t_buff	ft_buffinit(void)
{
	t_buff	buff;

	buff.maxlen = 0;
	buff.len = 0;
	buff.jlen = 0;
	buff.buffer = NULL;
	buff.new_buff = NULL;
	buff.jstr = NULL;
	return (buff);
}
