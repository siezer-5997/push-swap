/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:04:07 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/11 19:23:24 by sizerese         ###   ########.fr       */
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
				best_index = current_a->nbr;
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

void	ft_set_price(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_stack_size(a);
	len_b = ft_stack_size(b);
	while (b)
	{
		b->push_price = b->index;
		if (!(b->above_median))
			b->push_price = len_b - b->index;
		if (b->target_node->above_median)
			b->push_price += b->target_node->index;
		else
			b->push_price += len_a - (b->target_node->index);
		b = b->next;
	}
}

void	ft_set_cheapest(t_stack *b)
{
	long	cheap;
	t_stack	*cheap_node;

	if (!b)
		return ;
	cheap = LONG_MAX;
	while (b)
	{
		if (b->push_price < cheap)
		{
			cheap = b->push_price;
			cheap_node = b;
		}
		b = b->next;
	}
	cheap_node->cheapest = 1;
}
