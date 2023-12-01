/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:31:40 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/03 23:45:50 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <fcntl.h>

int main(void)
{
	char str[] = "hello there##";
	int fd;

	fd = open("string.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putstr_fd(str, fd);
}
*/