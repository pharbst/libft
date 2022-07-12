/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_addfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:35:05 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/12 17:10:58 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_stack	*ft_stackadd_front(t_stack *stack, t_stack *newnode)
{
	t_stack	*last;

	if (stack)
	{
		newnode->next = stack;
		last = ft_stacklast(stack);
		last->next = newnode;
		stack = newnode;
	}
	return (stack);
}
