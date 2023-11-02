/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 23:15:21 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/18 18:23:30 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_checkmnumbers(const char *str, long int result, int sign)
{
	int	digit;

	digit = 0;
	while (*str >= '0' && *str <= '9')
	{
		digit = *str - '0';
		if ((result > (LLONG_MAX - digit) / 10) && sign > 0)
			return (-1);
		else if ((result > (LLONG_MAX - digit) / 10) && sign < 0)
			return (0);
		result *= 10;
		result = result + digit;
		str++;
	}
	return ((int)result * sign);
}

int	ft_atoi(const char *str)
{
	long long int	result;
	int				sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (*str == '-' || *str == '+')
		return (0);
	return (ft_checkmnumbers(str, result, sign));
}

// int main(void)
// {
//     // char str[] = "9223372036854775807";
// 	char str[]= "-92233720368543456783456787654578765456634565756775809";
//     printf("%d\n", ft_atoi(str));
//     printf("%d\n", atoi(str));
// }
