/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 23:25:50 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/25 00:32:55 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_bigger(long num, t_stack *b)
{
	int	i;

	if (!b)
		return (0);
	while (b->next)
	{
		if (num > b->nbr)
			b = b->next;
	}
	
}

t_stack	*ft_start_process(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	// first push two numbers 
	push_b(a, b);
	push_b(a, b);
	// then check the large number 
	if (ft_is_bigger((*a)->nbr, *b))
}
