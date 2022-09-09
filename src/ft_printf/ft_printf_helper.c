/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 05:11:07 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/09 21:24:10 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libftio.h"

t_buff	ft_printc(int c, t_buff buff)
{
	buff.jstr = ft_chartostr(c);
	buff.jlen = 1;
	return (buff);
}

t_buff	ft_prints(char *str, t_buff buff)
{
	if (!str)
		buff.jstr = ft_strdup("(null)");
	else
		buff.jstr = ft_strdup(str);
	buff.jlen = ft_strlen(buff.jstr);
	return (buff);
}

t_buff	ft_printi(int nbr, t_buff buff)
{
	buff.jstr = ft_itoa(nbr);
	buff.jlen = ft_strlen(buff.jstr);
	return (buff);
}

t_buff	ft_printu(unsigned int nbr, t_buff	buff)
{
	buff.jstr = ft_uitoa(nbr);
	buff.jlen = ft_strlen(buff.jstr);
	return (buff);
}

t_buff	ft_printp(unsigned long ptr, t_buff buff)
{
	char	*stash;

	stash = ft_itohex(ptr);
	buff.jstr = ft_strjoin("0x", stash);
	buff.jlen = ft_strlen(buff.jstr);
	return (free(stash), buff);
}
