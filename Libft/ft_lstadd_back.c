/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:27:22 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/11 20:18:34 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next != 0)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
}

// int main(void)
// {
// 	t_list *head;
// 	// t_list *node2;
// 	t_list *new;

// 	head = NULL;

// 	// node2 = ft_lstnew(ft_strdup("world"));
// 	// node2->next = NULL;
// 	// head->next = node2;

// 	// node2 = ft_lstnew(ft_strdup("newworldsssss"));
// 	// node2->next = NULL;
// 	// head->next->next = node2;

// 	new = ft_lstnew(ft_strdup("destroyer!"));
// 	ft_lstadd_back(&head, new);
// 	printf("%s\n", head->content);
// }