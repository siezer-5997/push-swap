/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:12:00 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/16 00:53:56 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp_next;

	if (!(*a) || !a)
		return ;
	tmp = *a;
	tmp_next = (*a)->next->next;
	(*a) = (*a)->next;
	(*a)->next = tmp;
	(*a)->next->next = tmp_next;
}

void	swap_b(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp_next;

	if (!(*b) || !b)
		return ;
	tmp = *b;
	tmp_next = (*b)->next->next;
	(*b) = (*b)->next;
	(*b)->next = tmp;
	(*b)->next->next = tmp_next;
}

void	swap_ab(t_stack **a, t_stack **b)
{
	swap_a(a);
	swap_b(b);
}

// void	ra(t_stack *a)
// {
	
// }
