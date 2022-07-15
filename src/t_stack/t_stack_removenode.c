/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_removenode.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:43:28 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/15 19:37:55 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*removes a node with the index passed as parameter
and returns a pointer to the removed node*/

t_stack	*ft_stackremove_node(t_stack **stack, size_t index)
{
	t_stack	*node;
	t_stack	*stash;

	if (index == 0)
		stash = ft_stacklast(stack);
	else
		stash = ft_stacksearch(stack, index - 1);
	if (!stash)
		return (NULL);
	node = stash->next;
	stash->next = stash->next->next;
	return (node);
}