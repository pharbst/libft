/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:19:15 by pharbst           #+#    #+#             */
/*   Updated: 2022/04/18 19:13:54 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isalnum(int alnumchar)
{
	if ((alnumchar <= '9' && alnumchar >= '0') || (alnumchar <= 'Z'
			&& alnumchar >= 'A') || (alnumchar <= 'z' && alnumchar >= 'a'))
		return (1);
	else
		return (0);
}
