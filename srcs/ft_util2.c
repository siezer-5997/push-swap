/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:14:41 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/30 00:19:50 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_stack_size(t_stack *stack)
{
	int		len;
	t_stack	*ptr;

	if (!stack)
		return (0);
	ptr = stack;
	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	res = 0;
	while (src[res] != '\0')
	{
		res++;
	}
	if (size < 1)
		return (res);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
