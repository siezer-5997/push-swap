/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:08:42 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/30 00:14:53 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rt_a(t_stack **a)
{
	t_stack	*tmp;

	if (!(*a) || !a)
		return ;
	tmp = (*a);
	(*a) = (*a)->next;
	ft_last_stack((*a))->next = tmp;
	tmp->next = NULL;
	ft_in(a);
}

void	rt_b(t_stack **b)
{
	t_stack	*tmp;

	if (!(*b) || !b)
		return ;
	tmp = (*b);
	(*b) = (*b)->next;
	ft_last_stack((*b))->next = tmp;
	tmp->next = NULL;
	ft_in(b);
}

void	rt_ab(t_stack **a, t_stack **b)
{
	rt_a(a);
	rt_b(b);
}
