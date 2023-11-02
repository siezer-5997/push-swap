/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:20:50 by sizerese          #+#    #+#             */
/*   Updated: 2023/07/30 21:51:46 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*result;

	i = 0;
	result = (unsigned char *)str;
	while (i < n)
	{
		if (result[i] == (unsigned char)c)
			return (result + i);
		i++;
	}
	return (0);
}

/*
int main(void)
{
    const char s1[] = "http://www.tutorialspoint.com";
    printf("%s\n", ft_memchr(s1, '\0', 19));
    printf("%s\n", memchr(s1, '\0', 19)); 
}
*/