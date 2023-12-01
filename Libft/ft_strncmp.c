/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:55:39 by sizerese          #+#    #+#             */
/*   Updated: 2023/07/30 21:58:24 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *src, const char *dest, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dest1;

	i = 0;
	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	while (src1[i] && i < n)
	{
		if (src1[i] != dest1[i])
			return (src1[i] - dest1[i]);
		i++;
	}
	if (i != n)
		return (src1[i] - dest1[i]);
	return (0);
}
/*
int main(){
    char src[] = "hell0";
    char des[] = "hell2";

    printf("%d\n", ft_strncmp(src, des, 5));
    printf("%d\n", strncmp(src, des, 5));
}
*/