/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:42:00 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/01 22:59:11 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **dest, t_stack **src)
{
	t_stack	*temp;

	if (!(*src) || !src)
		return ;
	temp = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->previous = NULL;
	temp->previous = NULL;
	if (*dest == NULL)
	{
		*dest = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *dest;
		temp->next->previous = temp;
		*dest = temp;
	}
}

void	push_a(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_in(a);
	ft_in(b);
	write(1, "pa\n", 3);
}

void	push_b(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_in(a);
	ft_in(b);
	write(1, "pb\n", 3);
}
