/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:08:42 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/09 21:09:03 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*last_node;

	if (!(*stack) || !stack)
		return ;
	last_node = ft_last_stack(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->previous = NULL;
	last_node->next->previous = last_node;
	last_node->next->next = NULL;
}

void	rt_a(t_stack **a)
{
	rotate(a);
	ft_set_index(*a);
	write(1, "ra\n", 3);
}

void	rt_b(t_stack **b)
{
	rotate(b);
	ft_set_index(*b);
	write(1, "rb\n", 3);
}

void	rt_ab(t_stack **a, t_stack **b)
{
	rt_a(a);
	rt_b(b);
	write(1, "rr\n", 3);
}
