/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 22:25:55 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/02 00:58:55 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_stack(long num)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (0);
	new_node->nbr = num;
	new_node->next = NULL;
	return (new_node);
}

t_stack	*ft_last_stack(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}

void	ft_add_back(t_stack **stack, t_stack *new_stack)
{
	if (!stack)
		return ;
	if (!(*stack))
		*stack = new_stack;
	else
		(ft_last_stack(*stack))->next = new_stack;
}

int	ft_my_atoi(const char *str)
{
	long long int	result;
	int				sign;

	sign = 1;
	result = 0;
	while (*str >= 9 && *str <= 13)
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error();
		result = result * 10 + (*str - 48);
		str++;
	}
	if ((result * sign) > 2147483647 || (result * sign) < -2147483648)
		ft_error();
	return (result * sign);
}
