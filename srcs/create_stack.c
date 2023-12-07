/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:45:35 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/07 19:09:59 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_repetition(t_stack *a, int nbr)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->nbr == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int	ft_stack_sorted(t_stack *a)
{
	if (!a)
		return (1);
	while (a->next)
	{
		if (a->nbr > a->next->nbr)
			return (0);
		a = a->next;
	}
	return (1);
}

t_stack	*find_highest_node(t_stack *a)
{
	int		highest_num;
	t_stack	*highest_node;

	highest_num = INT_MIN;
	if (!a)
		return (0);
	while (a)
	{
		if (a->nbr > highest_num)
		{
			highest_num = a->nbr;
			highest_node = a;
		}
		else
			a = a->next;
	}
	return (highest_node);
}

t_stack	*find_smallest_node(t_stack *stack)
{
	int		smallest_num;
	t_stack	*smallest_node;

	smallest_num = INT_MAX;
	if (!stack)
		return (0);
	while (stack)
	{
		if (stack->nbr < smallest_num)
		{
			smallest_num = stack->nbr;
			smallest_node = stack;
		}
		else
			stack = stack->next;
	}
	return (smallest_node);
}
