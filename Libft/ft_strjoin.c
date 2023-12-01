/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:15:50 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/18 18:23:05 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		c;
	char	*result;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	result = (char *) malloc(sizeof(char) * 
			(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (0);
	i = 0;
	c = 0;
	while (s1[i])
	{
		result[c++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		result[c++] = s2[i++];
	}
	result[c] = '\0';
	return (result);
}
/*
int main(void)
{
    const char str[] = "hello22222";
    // const char str2[] = NULL;

    char *res = ft_strjoin(str, NULL);
    printf("%s\n", (res));
}
*/