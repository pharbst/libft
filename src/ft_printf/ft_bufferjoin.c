/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:41:37 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/09 17:09:53 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

t_buff	ft_bufferjoin(t_buff buff)
{
	if (buff.jlen == 0)
		buff.jlen = ft_strlen(buff.jstr);
	if (buff.len + buff.jlen > buff.maxlen)
	{
		buff.new_buff = (char *)ft_calloc((buff.len
					+ buff.jlen + 100), sizeof(char));
		if (!buff.new_buff)
			exit(0);
		buff.maxlen = buff.len + buff.jlen + 100;
		if (buff.buffer)
			ft_memcpy(buff.new_buff, buff.buffer, buff.len);
		ft_memcpy(buff.new_buff + buff.len, buff.jstr, buff.jlen);
		if (buff.buffer)
			free(buff.buffer);
	}
	else
		ft_memcpy(buff.buffer + buff.len, buff.jstr, buff.jlen);
	buff.buffer = buff.new_buff;
	buff.len += buff.jlen;
	buff.jlen = 0;
	if (buff.jstr)
		free(buff.jstr);
	buff.jstr = NULL;
	return (buff);
}
