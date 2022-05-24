/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:41:37 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/24 23:13:50 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_bufferjoin(char **buff, char *jstr, int buff_len, int jlen)
{
	char	*new_buff;

	if (jlen == 0)
		jlen = ft_strlen(jstr);
	new_buff = malloc((buff_len + jlen) * sizeof(char));
	ft_memcpy(new_buff, *buff, buff_len);
	ft_memcpy(new_buff + buff_len, jstr, jlen);
	free(*buff);
	free(jstr);
	*buff = new_buff;
	return (buff_len + jlen);
}
