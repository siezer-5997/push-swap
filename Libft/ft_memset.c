/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:34:25 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/11 20:17:59 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}

/*
int main(void)
{
    char str[] = "helloworld";
    printf("%s\n", ft_memset(str, '$', 5));
    printf("%s\n", ft_memset2(str, '$', 5));

}
*/