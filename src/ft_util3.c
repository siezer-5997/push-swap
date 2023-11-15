/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:53:48 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/16 00:09:02 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_assign_index(t_stack *a)
{
	long	i;
	t_stack	*head;

	i = 0;
	head = a;
	if (!a)
		return (NULL);
	while (a)
	{
		a->index = i;
		i++;
		a = a->next;
	}
	a = head;
	return (a);
}

void	ft_in(t_stack **a)
{
	long	i;
	t_stack	*tmp;

	i = 0;
	tmp = (*a);
	if (!(*a) || !a)
		return ;
	while (*a)
	{
		(*a)->index = i;
		i++;
		(*a) = (*a)->next;
	}
	(*a) = tmp;
}
