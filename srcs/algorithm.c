/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 23:25:50 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/04 19:51:47 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_is_highest(t_stack *a)
{
	int		highest_num;
	t_stack	*highest_node;

	highest_num = INT_MIN;
	if (!a)
		return (0);
	while (a->next)
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

void	ft_tiny_sort(t_stack **a)
{
	t_stack	*highest_node;

	highest_node = ft_is_highest(*a);
	if (!(*a))
		return ;
	printf("1st nbr %ld\n", (*a)->nbr);
	if ((*a)->nbr == highest_node->nbr)
		rt_a(a);
	else if ((*a)->next->nbr == highest_node->nbr)
		rrt_a(a);
	if ((*a)->nbr > (*a)->next->nbr)
		swap_a(a);
}

void	ft_process(t_stack **a)
{
	int	size;

	size = ft_stack_size(*a);
	if (size == 3 && !ft_stack_sorted(*a))
		ft_tiny_sort(a);
	else
		printf("big af!");
}
