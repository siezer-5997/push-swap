/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:31:29 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/18 18:24:26 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>

//  int main(void)
//  {
// 	int fd;

// 	fd = open("open.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
// 	ft_putchar_fd('R', fd);
// 	close(fd);
//  }