/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:30:54 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/08 22:20:28 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d1;
	const unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)src;
	d1 = (unsigned char *)dest;
	if (!s1 && !d1)
		return (NULL);
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (d1);
}

// int main()
// {
//     const char *src = NULL;
//     char dest[50] = "sened";

//     printf("%s\n", memcpy(dest, src, strlen(src)+1));
//     //printf("%s\n", ft_memcpy(dest+2, dest, 3));

// }
