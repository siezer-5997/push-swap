/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:16:44 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/09 20:34:14 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_help(char **argv, t_stack *a, int i, int *index)
{
	int		s_index;
	int		j;
	char	**tmp;

	s_index = 0;
	tmp = ft_split(argv[i], 32);
	while (tmp[s_index] != NULL)
	{
		j = ft_my_atoi(tmp[s_index++]);
		ft_add_back(&a, ft_new_stack(j), index);
	}
	return (a);
}

static t_stack	*ft_sub_conversiton(char **argv, t_stack *a, int *index)
{
	a = NULL;
	a = ft_help(argv, a, 1, index);
	return (a);
}

static int	ft_check__spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32)
			return (1);
		i++;
	}
	return (0);
}

static t_stack	*ft_add_conversion(int argc, char **argv, 
	t_stack *a, int *index)
{
	int		j;
	int		i;

	i = 1;
	while (i < argc)
	{
		if (ft_check__spaces(argv[i]) || !argv[i][0])
		{
			a = ft_help(argv, a, i, index);
		}
		else
		{
			j = ft_my_atoi(argv[i]);
			ft_add_back(&a, ft_new_stack(j), index);
		}
		i++;
	}
	return (a);
}

t_stack	*ft_conversion_stack(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		index;

	i = 1;
	index = 0;
	a = NULL;
	if (argc < 2)
		return (NULL);
	else if (argc == 2)
		a = ft_sub_conversiton(argv, a, &index);
	else if (argc > 2)
	{
		a = ft_add_conversion(argc, argv, a, &index);
	}
	else
		ft_error();
	return (a);
}
