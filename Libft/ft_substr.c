/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:16:04 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/03 23:38:09 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *str, unsigned int start, size_t len)
{
	size_t	string_len;

	string_len = ft_strlen(str);
	if (string_len >= (start + len))
	{
		return (len);
	}
	else if (start >= string_len)
		return (0);
	else
		return (string_len - start);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!s)
		return (NULL);
	result = (char *) malloc(sizeof(char) * (ft_count(s, start, len) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			result[j] = s[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}
/*
int main(void)
{
    const char str[] = "hello";
    printf("%s\n", ft_substr(str, 0, 6));
}
*/