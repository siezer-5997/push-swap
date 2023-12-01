/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:06:01 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/04 20:13:24 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	b;

	i = 0;
	b = (unsigned char) c;
	while (str[i] != '\0')
	{
		if (b == str[i])
			return ((char *)str + i);
		i++;
	}
	if (str[i] == '\0' && b == '\0')
		return ((char *)str + i);
	return (0);
}

// int main(void)
// {
//     // char str[] = "hello . t3here!";
// 	char s[] = "tripouille";
//     // char find = ' ';
//     char *ret;

//     ret = ft_strchr(s, 256);
//     printf("%s\n", ret);
// }
