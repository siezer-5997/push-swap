/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:37:32 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/04 17:40:17 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	if (!(*s1))
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1 + start, 0, (end - start + 1)));
}
// int main(void)
// {
//     const char str[] = "suspectsussssussssssuuuuussssss";
//     const char set[] = "suss";

//     printf("%s", ft_strtrim(str, set));
// }
