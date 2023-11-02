/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:31:18 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/03 23:46:19 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
void ft_Upper(unsigned int i, char *c)
{
	if (*c >= 'A' && *c <= 'Z' && i >= 0)
		*c += 32;
}

int  main(void)
{
	char str[] = "What is UP";

	ft_striteri(str, ft_Upper);
	printf("%s\n", str);
}
*/