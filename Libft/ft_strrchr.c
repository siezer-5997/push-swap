/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:39:20 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/04 20:14:28 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	b;

	b = (unsigned char) c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (b == str[i])
			return ((char *)str + i);
		i--;
	}
	return (0);
}

// int main(void)
// {
//     // char str[] = "hello";
// 	char s[] = "tripouille";
//     // char find = 'h';
//     char *ret;

//     ret = strrchr(s, 370);
//     printf("%s\n", ret);
// }