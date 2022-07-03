/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:41:37 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/03 12:19:47 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_buff	*ft_bufferjoin(t_buff *buff)
{
	if ((*buff).jlen == 0)
		(*buff).jlen = ft_strlen((*buff).jstr);
	if ((*buff).len + (*buff).jlen > (*buff).maxlen)
	{
		(*buff).new_buff = (char *)ft_calloc(((*buff).len
					+ (*buff).jlen + 100), sizeof(char));
		if (!(*buff).new_buff)
			return (NULL);
		if ((*buff).buffer)
			ft_strlcpy((*buff).new_buff, (*buff).buffer, (*buff).len);
		ft_strlcpy(((*buff).new_buff + (*buff).len), (*buff).jstr, (*buff).jlen);
		if ((*buff).buffer)
			free((*buff).buffer);
		(*buff).buffer = (*buff).new_buff;
	}
	else
		ft_strlcpy((*buff).buffer + (*buff).len, (*buff).jstr, (*buff).jlen);
	(*buff).len = (*buff).len + (*buff).jlen;
	return (buff);
}
