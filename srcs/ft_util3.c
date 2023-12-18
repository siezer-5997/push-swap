/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:53:48 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/18 23:47:11 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_assign_index(t_stack *a)
{
	long	i;
	t_stack	*head;

	i = 0;
	head = a;
	if (!a)
		return (NULL);
	while (a)
	{
		a->index = i;
		i++;
		a = a->next;
	}
	a = head;
	return (a);
}

void	ft_set_index(t_stack *a)
{
	long	i;
	int		median;

	i = 0;
	median = 0;
	if (!a)
		return ;
	if (ft_stack_size(a) == 2)
		median = 1;
	else
		median = (ft_stack_size(a) / 2) + 1;
	// median = (ft_stack_size(a) / 2);
	// printf("stack sizes %d\n", ft_stack_size(a));
	while (a)
	{
		a->index = i;
		if (a->index < median)
			a->above_median = 1;
		else
			a->above_median = 0;
		i++;
		a->cheapest = 0;
		a = a->next;
	}
}

t_stack	*ft_create_sum(void)
{
	t_stack	*new;
	t_stack	*b;

	b = ft_new_stack(7);
	b->next = NULL;
	new = ft_new_stack(8);
	new->next = NULL;
	b->next = new;
	new = ft_new_stack(9);
	new->next = NULL;
	b->next->next = new;
	b = ft_assign_index(b);
	return (b);
}

void	ft_display_stack(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	if (!tmp)
		printf("No node");
	while (tmp)
	{
		printf("The node value is: %ld\n"
			"\tabove median: %d\n"
			"\tThe target is %ld\n"
			"\tThe prev is %ld\n"
			"\tThe next is %ld\n\n",
			tmp->nbr, tmp->above_median, tmp->target_node ? tmp->target_node->nbr : 0, tmp->previous ? tmp->previous->nbr : 0, tmp->next? tmp->next->nbr : 0);
		tmp = tmp->next;
	}
	printf("\n");
}

void	ft_display_both(t_stack *a, t_stack *b)
{
	printf("Stacks a:\n");
	ft_display_stack(a);
	printf("Stacks b:\n");
	ft_display_stack(b);
}
