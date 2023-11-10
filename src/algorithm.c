/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:16:44 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/10 23:27:50 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static t_stack	*ft_help(char **argv, t_stack *a, int i, int *index)
// {
// 	int		s_index;
// 	int		j;
// 	char	**tmp;
// 	char	*ptr = NULL;

// 	s_index = 0;
// 	tmp = ft_split(argv[i], 32);
// 	while (tmp[s_index] != NULL)
// 	{
// 		ptr = my_ft_strjoin(ptr, tmp[s_index++]);
// 		j = ft_my_atoi(tmp[s_index++]);
// 		ft_add_back(&a, ft_new_stack(j), index);
// 	}
// 	return (a);
// }

// static t_stack	*ft_sub_conversiton(char **argv, t_stack *a, int *index)
// {
// 	a = NULL;
// 	a = ft_help(argv, a, 1, index);
// 	return (a);
// }

// static int	ft_check__spaces(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == 32)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }
// int ft_add_nums()

// static t_stack	*ft_add_conversion(int argc, char **argv, 
// 	t_stack *a, int *index)
// {
// 	int		j;
// 	int		i;
// 	char	*ptr;

// 	i = 1;
// 	ptr = NULL;
// 	while (i < argc)
// 	{
// 		ptr = my_ft_strjoin(ptr, argv[i]);
// 		i++;
// 	}
// 	printf("%s\n", ptr);
// 	return (a);
// }

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
	// for (i=0; i < *size; i++)
	// {
	// 	printf("tmps string:[%d]: %s\n", i, tmp[i]);
	// }
	printf("size: %d\n", *size);
	i = 0;
	while (i < *size)
	{
		nums[i] = ft_my_atoi(tmp[i]);
		i++;
	}
	printf("check\n");
	return (nums);
}

int	*ft_conversion_stack(int argc, char **argv)
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
	printf("string 1st:%s\n", ptr);
	nums_result = ft_parse(ptr, &size);
	return (nums_result);
}

