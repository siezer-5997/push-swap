/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:46:52 by sizerese          #+#    #+#             */
/*   Updated: 2023/07/29 23:51:08 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
int	main(void)
{
	char	str[] = "hello";
	char	result[] = "world";
	
	printf("len of src: %zu\n", ft_strlcpy(result, str, 6));
	printf("result: %s\n", result);
	printf("src: %s\n", str);
	return 0;
}
*/