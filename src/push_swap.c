/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:30:18 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/10 23:28:26 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// t_stack	*a;
	int		index;
	int		*result;
	int		i;

	index = 0;
	result = ft_conversion_stack(argc, argv);
	i = 0;
	for (int i=0; i < 10; i++)
	{
		printf("Number [%d]: %d\n", i, result[i]);
	}
	// while (a)
	// {
	// 	printf("Inside stack: Index[%ld]: %ld\n", a->index, a->nbr);
	// 	a = a->next;
	// }
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
