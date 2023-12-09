/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:35:04 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/09 21:08:49 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*last_node;

	if (!(*stack) || !stack)
		return ;
	last_node = ft_last_stack(*stack);
	(*stack)->previous = last_node;
	last_node->next = *stack;
	last_node->previous->next = NULL;
	(*stack) = last_node;
	last_node->previous = NULL;
}

void	rrt_a(t_stack **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
	ft_set_index(*a);
}

void	rrt_b(t_stack **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
	ft_set_index(*b);
}

void	rrt_ab(t_stack **a, t_stack **b)
{
	rrt_a(a);
	rrt_b(b);
	write(1, "rrr\n", 4);
}
