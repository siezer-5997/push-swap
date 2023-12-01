/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:51:08 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/17 00:58:19 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst)
		return ;
	ptr = lst;
	while (ptr != NULL)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}

// void ft_strlength(void *s)
// {
// 	char *str;

// 	str = (char *)s;
// 	while (*str)
// 	{
// 		if (*str >= 'a' && *str <= 'z')
// 			*str -= 32;
// 		str++;
// 	}
// }

// int main(void)
// {
// 	t_list *head;
// 	t_list *node;

// 	head = ft_lstnew(ft_strdup("hello I am become THE destroyer of worlds"));
// 	head->next = NULL;

// 	node = ft_lstnew(ft_strdup("whatttU"));
// 	node->next = NULL;
// 	head->next = node;

// 	node = ft_lstnew(ft_strdup("this is sparta"));
// 	node->next = NULL;
// 	head->next->next = node;

// 	ft_lstiter(head, ft_strlength);
// 	printf("%s\n", head->next->next->content);
// }