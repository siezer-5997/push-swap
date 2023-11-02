/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:53:21 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/18 18:23:59 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !del)
		return ;
	ptr = lst;
	del(ptr->content);
	free(lst);
}

// /*main*/
// void ft_del(void *ptr)
// {
// 	free(ptr);
// }

// int main(void)
// {
// 	t_list *head;
// 	t_list *node;

// 	head = ft_lstnew(ft_strdup("hello"));
// 	head->next = NULL;

// 	node = ft_lstnew(ft_strdup("what"));
// 	node->next = NULL;
// 	head->next = node;
// 	node = ft_lstnew(ft_strdup("there"));
// 	node->next = NULL;
// 	head->next->next = node;
// 	printf("before: %s\n", head->next->content);
// 	ft_lstdelone(head->next, ft_del);
// 	printf("After: %s\n", head->next->content);
// }
