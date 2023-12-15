/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:16:44 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/15 20:53:20 by sizerese         ###   ########.fr       */
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
	i = 0;
	while (i < *size)
	{
		if (!ft_strncmp(tmp[i], "0", 1))
			nums[i] = ft_my_atoi(tmp[i]);
		else if (ft_my_atoi(tmp[i]) == 0)
			return (ft_free_it(tmp), free(nums), NULL);
		nums[i] = ft_my_atoi(tmp[i]);
		i++;
	}
	ft_free_it(tmp);
	return (nums);
}

void	ft_add_2stack(t_stack **a, int *result, int *index, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (check_repetition(*a, result[i]))
		{
			ft_free_nodes(a);
			ft_putendl_fd("Error", 2);
			return ;
		}
		ft_add_back(a, ft_new_stack(result[i++]), index);
	}
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
	ptr = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
	{
		ft_putendl_fd("Error", 2);
		return (NULL);
	}
	else if (argc >= 2)
	{
		while (i < argc)
		{
			ptr = my_ft_strjoin(ptr, argv[i++]);
		}
	}
	else
		ft_error("Error\n");
	nums_result = ft_parse(ptr, &size);
	free(ptr);
	if (nums_result)
		ft_add_2stack(&a, nums_result, index, size);
	if (nums_result == NULL)
		ft_putendl_fd("Error, wrong input values for integers!", 2);
	free(nums_result);
	return (a);
}
