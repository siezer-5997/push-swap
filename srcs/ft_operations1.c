/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:12:00 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/01 23:00:42 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **stack)
{
	if (!(*stack) || !stack)
		return ;
	*stack = (*stack)->next;
	(*stack)->previous->previous = *stack;
	(*stack)->previous->next = (*stack)->next;
	if ((*stack)->next)
		(*stack)->next->previous = (*stack)->previous;
	(*stack)->next = (*stack)->previous;
	(*stack)->previous = NULL;
	ft_in(stack);
}

void	swap_a(t_stack **a)
{
	swap(a);
	write(1, "sa\n", 3);
	ft_in(a);
}

void	swap_b(t_stack **b)
{
	swap(b);
	write(1, "sa\n", 3);
	ft_in(b);
}

void	swap_ab(t_stack **a, t_stack **b)
{
	swap_a(a);
	swap_b(b);
}
