/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_command.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:18:38 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/09 22:00:09 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_same(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	printf("cheapest node: %ld\n", cheapest_node->nbr);
	printf("top in b: %ld\n", cheapest_node->nbr);
	while (*a != cheapest_node->target_node && *b != cheapest_node)
	{	printf("inside while to rt_ab");
		rt_ab(a, b);
	}
	ft_set_index(*a);
	ft_set_index(*b);
}

void	reverse_rotate_same(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*a != cheapest_node->target_node && *b != cheapest_node)
		rrt_ab(a, b);
	ft_set_index(*a);
	ft_set_index(*b);
}

void	ft_finalize_rotate(t_stack **stack, t_stack *cheapest_node, char who)
{
	if (who == 'b')
	{
		if (cheapest_node->above_median)
		{
			while (*stack != cheapest_node)
				rt_b(stack);
		}
		else
			while (*stack != cheapest_node)
				rrt_b(stack);
	}
	else if (who == 'a')
	{
		if (cheapest_node->target_node->above_median)
		{
			while (*stack != cheapest_node->target_node)
				rt_a(stack);
		}
		else
			while (*stack != cheapest_node->target_node)
				rrt_a(stack);
	}
}

void	move_nodes(t_stack **a, t_stack **b)
{
	t_stack	*cheapest_node;

	cheapest_node = ft_find_cheapest(*b);
	printf("is cheapest above median? %d\n", cheapest_node->above_median);
	if (cheapest_node->above_median 
		&& cheapest_node->target_node->above_median)
		rotate_same(a, b, cheapest_node);
	else if (!(cheapest_node->above_median) 
		&& !(cheapest_node->target_node->above_median))
		reverse_rotate_same(a, b, cheapest_node);
	ft_finalize_rotate(b, cheapest_node, 'b');
	ft_finalize_rotate(a, cheapest_node, 'a');
	push_a(a, b);
}

void	init_nodes(t_stack *a, t_stack *b)
{
	ft_set_index(a);
	ft_set_index(b);
	ft_set_target(a, b);
	ft_set_price(a, b);
	ft_set_cheapest(b);
}
