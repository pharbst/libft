/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:44:55 by pharbst           #+#    #+#             */
/*   Updated: 2022/05/17 20:44:55 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*temp;

	temp = *lst;
	if (del)
	{
		while (temp)
		{
			next = temp->next;
			del(temp->content);
			free(temp);
			temp = next;
		}
	}
	*lst = NULL;
}
