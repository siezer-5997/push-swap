/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:05:41 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/04 00:18:23 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	if (!dest && size == 0)
		return (ft_strlen(src));
	while (dest[d] && d < size)
	{
		d++;
	}
	while (src[s] != '\0' && (d + s + 1) < size)
	{
		dest[d + s] = src[s];
		s++;
	}
	if (d != size)
		dest[d + s] = '\0';
	return (d + ft_strlen(src));
}
/*
int main(void)
{
    char d[] = "hello";
    char s[] = "";

    printf("%zu\n", ft_strlcat(d, s, 0));
    printf("%zu\n", strlcat(d, s, 0));

    return 0;
}
*/