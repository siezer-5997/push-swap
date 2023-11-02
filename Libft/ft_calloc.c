/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 23:39:31 by sizerese          #+#    #+#             */
/*   Updated: 2023/09/06 21:54:56 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (size && count > UINT_MAX / size)
		return (NULL);
	i = size * count;
	ptr = malloc(i);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, i);
	return (ptr);
}
/*
int main()
{
  int *s1;
  int i = 0;
  s1 = ft_calloc(4, INT_MAX);
  while (i < 4)
  {
    printf("%d", s1[i]);
    i++;
  }
}
*/