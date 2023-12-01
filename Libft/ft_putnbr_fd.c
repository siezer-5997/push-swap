/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:31:59 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/03 21:18:30 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		n = 147483648;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n %= 10;
		n += 48;
		write(fd, &n, 1);
	}
	else
	{
		n = n + 48;
		write(fd, &n, 1);
	}
}

/*
#include <fcntl.h>
 int main(void)
 {
	int fd;

	fd = open("numbers.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
 }
 */