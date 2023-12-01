/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 23:33:49 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/17 00:04:07 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*node;

	ptr = 0;
	while (lst != 0)
	{
		node = (t_list *)malloc(sizeof(t_list));
		if (!node)
		{
			ft_lstdelone(node, del);
			return (ptr);
		}
		node->content = (*f)(lst->content);
		node->next = 0;
		ft_lstadd_back(&ptr, node);
		lst = lst->next;
	}
	return (ptr);
}

// void *ft_strlength(void *s)
// {
// 	int i = 0;
// 	char *str;

// 	str = (char *)s;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z')
// 			str[i] += 32;
// 		i++;
// 	}
// 	return (str);
// }

// void ft_del(void *ptr)
// {
// 	free(ptr);
// }

// int main(void)
// {
// 	t_list *head;
// 	// t_list *node2;
// 	t_list *result;

// 	head = ft_lstnew(ft_strdup("hello!"));
// 	head->next = NULL;

// 	// node2 = ft_lstnew(ft_strdup("WORLD"));
// 	// node2->next = NULL;
// 	// head->next = node2;

// 	// node2 = ft_lstnew(ft_strdup("newworld"));
// 	// node2->next = NULL;
// 	// head->next->next = node2;

// 	result = ft_lstmap(head, *ft_strlength, ft_del);
	// printf("%s%d%c\n", result->content);
// }