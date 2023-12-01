/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:17:02 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/18 18:23:47 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void ft_del(void *ptr)
// {
// 	free(ptr);
// }

// int main(void)
// {
// 	t_list *head;
// 	t_list *node;
// 	t_list *node1;

// 	head = ft_lstnew(ft_strdup("hello"));
// 	head->next = NULL;

// 	node = ft_lstnew(ft_strdup("what"));
// 	node->next = NULL;
// 	head->next = node;

// 	node1 = ft_lstnew(ft_strdup("happe"));
// 	node1->next = NULL;
// 	head->next->next = node1;
// 	ft_lstclear(&node, ft_del);
// 	printf("%s\n", node1->content);
// }
