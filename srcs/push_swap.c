/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:30:18 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/01 23:02:21 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack	*ft_process(t_stack *a, t_stack *b)
// {
// 	int	i;
// }

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		index;

	index = 0;
	a = NULL; 
	b = NULL;
	a = ft_conversion_stack(argc, argv, &index);
	// b = ft_create_sum();
	printf("Size of stack a: %d\n", ft_stack_size(a));
	printf("Before operation stack a:\n");
	ft_display_stack(a);
	swap_a(&a);
	printf("After operation:\n");
	ft_display_both(a, b);
	return (0);
}

// int	main(void)
// {
// 	t_stack	*s1;
// 	t_stack	*s2;
// 	t_stack	*new;

// 	s1 = ft_new_stack(11);
// 	s2 = ft_new_stack(22);
// 	s1->next = s2;
// 	s2 = ft_new_stack(33);
// 	s1->next->next = s2;
// 	new = ft_new_stack(42);
// 	ft_add_back(&s1, new);
// 	printf("%ld\n", ft_last_stack(s1)->nbr);
// }