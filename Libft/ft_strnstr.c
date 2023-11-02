/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:57:16 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/03 23:11:34 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && (haystack[i + j] == needle[j]) 
			&& (i + j) < len)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	const char hay[] = "hello3";
	const char needle[] = "o";
	printf("%s\n", ft_strnstr(hay, needle, 5));
	printf("%s\n", strnstr(hay, needle, 5));
}
*/