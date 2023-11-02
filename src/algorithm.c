/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:16:44 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/02 18:46:54 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_sub_conversiton(char **argv)
{
	t_stack	*a;
	int		i;
	int		j;
	char	**tmp;

	a = NULL;
	tmp = ft_split(argv[1], 32);
	printf("the splited: %s\n", tmp[0]);
	i = 0;
	j = 0;
	while (tmp[i] != NULL)
	{
		j = ft_my_atoi(tmp[i]);
		ft_add_back(&a, ft_new_stack(j));
		i++;
	}
	return (a);
}

int	ft_check__spaces(char *str)
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

t_stack	*ft_add_conversion(int argc, char **argv, t_stack *a, int i)
{
	int		s_index;
	char	**tmp;
	int		j;

	while (i < argc)
	{
		if (ft_check__spaces(argv[i]) == 1)
		{
			s_index = 0;
			tmp = ft_split(argv[i], 32);
			while (tmp[s_index] != NULL)
			{
				j = ft_my_atoi(tmp[s_index++]);
				ft_add_back(&a, ft_new_stack(j));
			}
		}
		else
		{
			j = ft_my_atoi(argv[i]);
			ft_add_back(&a, ft_new_stack(j));
		}
		i++;
	}
	return (a);
}

t_stack	*ft_conversion_stack(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;
	int		s_index;
	char	**tmp;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		a = ft_sub_conversiton(argv);
	else if (argc > 2)
	{
		while (i < argc)
		{
			if (ft_check__spaces(argv[i]) == 1)
			{
				s_index = 0;
				tmp = ft_split(argv[i], 32);
				while (tmp[s_index] != NULL)
				{
					j = ft_my_atoi(tmp[s_index++]);
					ft_add_back(&a, ft_new_stack(j));
				}
			}
			else
			{
				j = ft_my_atoi(argv[i]);
				ft_add_back(&a, ft_new_stack(j));
			}
			i++;
		}
	}
	else
		ft_error();
	return (a);
}
