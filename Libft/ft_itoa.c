/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:29:10 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/11 19:55:13 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static char	*ft_fill_numbers(char *buffer, int num, long int i)
{
	int	j;

	j = 1;
	if (num < 0)
	{
		num *= -1;
		buffer[0] = '-';
	}
	if (num == 0)
		buffer[0] = '0';
	while (num > 0)
	{
		buffer[i - j] = num % 10 + 48;
		num /= 10;
		j++;
	}
	buffer[i] = '\0';
	return (buffer);
}

char	*ft_itoa(int num)
{
	long int	i;
	char		*buffer;

	i = ft_count(num);
	if (num == -2147483648)
	{
		buffer = ft_strdup("-2147483648");
		return (buffer);
	}
	buffer = (char *) malloc(sizeof(char) * (i + 1));
	if (!buffer)
		return (NULL);
	buffer = ft_fill_numbers(buffer, num, i);
	return (buffer);
}

/*
int main(void)
{
	int	num = 1222223434534545435;

	printf("%s\n", ft_itoa(num));
}
*/