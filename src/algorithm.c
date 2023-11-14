/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:16:44 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/14 23:18:35 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_size(char **my_string)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (my_string[i] != NULL)
	{
		size++;
		i++;
	}
	return (size);
}

int	*ft_parse(char *str, int *size)
{
	int		*nums;
	char	**tmp;
	int		i;

	i = 0;
	tmp = ft_split(str, 32);
	*(size) = ft_find_size(tmp);
	nums = malloc(*(size) * sizeof(int));
	//printf("size: %d\n", *size);
	i = 0;
	while (i < *size)
	{
		nums[i] = ft_my_atoi(tmp[i]);
		i++;
	}
	return (nums);
}

t_stack	*ft_add_2stack(t_stack *a, int *result, int *index, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_add_back(&a, ft_new_stack(result[i]), index);
		i++;
	}
	return (a);
}

t_stack	*ft_conversion_stack(int argc, char **argv, int *index)
{
	t_stack	*a;
	int		i;
	char	*ptr;
	int		*nums_result;
	int		size;

	i = 1;
	size = 0;
	a = NULL;
	if (argc < 2)
		return (NULL);
	ptr = NULL;
	if (argc >= 2)
	{
		while (i < argc)
		{
			ptr = my_ft_strjoin(ptr, argv[i]);
			i++;
		}
	}
	else
		ft_error("arguments error");
	nums_result = ft_parse(ptr, &size);
	a = ft_add_2stack(a, nums_result, index, size);
	return (a);
}
