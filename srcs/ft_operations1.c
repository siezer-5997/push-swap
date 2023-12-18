/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:12:00 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/18 19:59:08 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **stack)
{
	if (!(*stack) || !stack)
		return ;
	if (!(*stack)->next)
		return ;
	*stack = (*stack)->next;
	(*stack)->previous->previous = *stack;
	(*stack)->previous->next = (*stack)->next;
	if ((*stack)->next)
		(*stack)->next->previous = (*stack)->previous;
	(*stack)->next = (*stack)->previous;
	(*stack)->previous = NULL;
}

void	swap_a(t_stack **a)
{
	swap(a);
	ft_set_index(*a);
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **b)
{
	swap(b);
	ft_set_index(*b);
	write(1, "sb\n", 3);
}

void	swap_ab(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_set_index(*a);
	ft_set_index(*b);
	write(1, "ss\n", 3);
}
