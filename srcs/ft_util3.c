/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:53:48 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/07 19:03:34 by sizerese         ###   ########.fr       */
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

void	ft_in(t_stack **a)
{
	long	i;
	t_stack	*tmp;

	i = 0;
	tmp = (*a);
	if (!(*a) || !a)
		return ;
	while (*a)
	{
		(*a)->index = i;
		i++;
		(*a) = (*a)->next;
	}
	(*a) = tmp;
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
			"\tThe target is %ld\n"
			"\tThe prev is %ld\n"
			"\tThe next is %ld\n\n", tmp->nbr, tmp->target_node ? tmp->target_node->nbr : 0, tmp->previous ? tmp->previous->nbr : 0, tmp->next? tmp->next->nbr : 0);
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
