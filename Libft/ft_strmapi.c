/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:31:05 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/03 23:43:33 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (!s)
		return (NULL);
	result = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
char ft_Upper(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z' && i >= 0)
		return (c + 32);
	return (c);
}

int  main(void)
{
	const char str[] = "HELLO    OLL&^*&^A";
	
	printf("%s\n", ft_strmapi(str, ft_Upper));
}
*/