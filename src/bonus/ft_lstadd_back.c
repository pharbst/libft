/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:44:40 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:44:40 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

void	ft_lstadd_back(t_list **lst, t_list *newnode)
{
	t_list	*lstlastnode;

	if (!*lst)
	{
		*lst = newnode;
		return ;
	}
	lstlastnode = ft_lstlast(*lst);
	lstlastnode->next = newnode;
}
