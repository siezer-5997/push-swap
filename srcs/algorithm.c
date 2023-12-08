/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 23:25:50 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/09 01:08:36 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_target(t_stack *a, t_stack *b)
{
	t_stack	*current_a;
	t_stack	*target_node;
	long	best_index;

	while (b)
	{
		best_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->nbr > b->nbr && current_a->nbr < best_index)
			{
				best_index = current_a->index;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (LONG_MAX == best_index)
			b->target_node = find_smallest_node(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

// void	ft_set_price(t_stack *a, t_stack *b)
// {
// }

void	ft_tiny_sort(t_stack **a)
{
	t_stack	*highest_node;

	highest_node = find_highest_node(*a);
	if (!(*a))
		return ;
	printf("highest %ld\n", highest_node->nbr);
	printf("smallest %ld\n", (find_smallest_node(*a)->nbr));
	if ((*a)->nbr == highest_node->nbr)
		rt_a(a);
	else if ((*a)->next->nbr == highest_node->nbr)
		rrt_a(a);
	if ((*a)->nbr > (*a)->next->nbr)
		swap_a(a);
}

void	ft_jack_process(t_stack **a, t_stack **b)
{
	printf("This is the jacked function\n");
	while (ft_stack_size(*a) > 3)
	{
		push_b(a, b);
	}
	ft_tiny_sort(a); // first sort the 3 numbers in a, then we can add the rest
	ft_set_target(*a, *b);
	ft_set_price(*a, *b);
}

void	ft_process(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_stack_size(*a);
	if (size <= 0)
		ft_error("Size is too small.\n");
	else if ((size >= 1 && size < 3) && !ft_stack_sorted(*a))
	{
		if (size == 2)
		{
			if ((*a)->nbr > (*a)->next->nbr)
				swap_a(a);
		}
	}
	else if (size == 3 && !ft_stack_sorted(*a))
		ft_tiny_sort(a);
	else if (size > 3 && !ft_stack_sorted(*a))
		ft_jack_process(a, b);
	else
		printf("Already sorted!\n\n");
}
