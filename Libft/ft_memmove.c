/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:10:24 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/11 19:57:53 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int					c1;
	unsigned char		*s1;
	const unsigned char	*s2;

	c1 = len - 1;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (!s1 && !s2)
		return (NULL);
	if (s1 > s2)
	{
		while (c1 >= 0)
		{
			s1[c1] = s2[c1];
			c1--;
		}
	}
	else
		ft_memcpy(s1, s2, len);
	return (s1);
}

/*
int main(void)
{
	char dest[] = "hello";
	//const char src[]  = "newstring";

   printf("Before memmove dest = %s\n", dest);
   ft_memmove(dest, dest+2, 5);
   printf("after memmove dest = %s\n", dest);

   return(0);
}
*/