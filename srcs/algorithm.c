/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 23:25:50 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/11 19:24:29 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_tiny_sort(t_stack **a)
{
	t_stack	*highest_node;

	highest_node = find_highest_node(*a);
	if (!(*a) || !a)
		return ;
	// printf("highest %ld\n", highest_node->nbr);
	// printf("smallest %ld\n", (find_smallest_node(*a)->nbr));
	if (ft_stack_size(*a) == 2)
	{
		if ((*a)->nbr > (*a)->next->nbr)
			swap_a(a);
	}
	else if (ft_stack_size(*a) == 3)
	{
		if ((*a)->nbr == highest_node->nbr)
			rt_a(a);
		else if ((*a)->next->nbr == highest_node->nbr)
			rrt_a(a);
		if ((*a)->nbr > (*a)->next->nbr)
			swap_a(a);
	}
}

t_stack	*ft_find_cheapest(t_stack *b)
{
	t_stack	*cheap;

	if (!b)
		return (NULL);
	while (b)
	{
		if (b->cheapest)
			cheap = b;
		b = b->next;
	}
	return (cheap);
}

void	ft_jack_process(t_stack **a, t_stack **b)
{
	t_stack	*smallest_node;

	while (ft_stack_size(*a) > 3)
	{
		push_b(a, b);
	}
	ft_tiny_sort(a);
	while (*b)
	{
		init_nodes(*a, *b);
		// if (ft_stack_size(*b) == 1)
		// 	ft_display_both(*a, *b);
		move_nodes(a, b);
	}
	ft_set_index(*a);
	smallest_node = find_smallest_node(*a);
	if (smallest_node->above_median)
		while (*a != smallest_node)
			rt_a(a);
	else
		while (smallest_node != *a)
			rrt_a(a);
}

void	ft_push_swap(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_stack_size(*a);
	if (size <= 0)
		ft_error("Size is too small.\n");
	else if ((size >= 1 && size <= 3) && !ft_stack_sorted(*a))
	{
		ft_tiny_sort(a);
	}
	else if (size > 3 && !ft_stack_sorted(*a))
		ft_jack_process(a, b);
	else
		ft_error("Already sorted!\n\n");
}
