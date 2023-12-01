/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:51:25 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/08 17:56:20 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (0);
	ptr = lst;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	return (ptr);
}

// int main(void)
// {
// 	t_list *head;
// 	t_list *node2;

// 	head = ft_lstnew(ft_strdup("hello"));
// 	head->next = NULL;

// 	node2 = ft_lstnew(ft_strdup("world"));
// 	node2->next = NULL;
// 	head->next = node2;

// 	node2 = ft_lstnew(ft_strdup("newworldsssss"));
// 	node2->next = NULL;
// 	head->next->next = node2;
// 	printf("%s\n", ft_lstlast(head)->content);
// }