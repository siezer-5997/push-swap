/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:49:52 by sizerese          #+#    #+#             */
/*   Updated: 2023/08/08 22:22:25 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*ptr;

	if (!lst)
		return (0);
	ptr = lst;
	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
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

// 	node2 = ft_lstnew(ft_strdup("newworld"));
// 	node2->next = NULL;
// 	head->next->next = node2;
// 	printf("%d\n", ft_lstsize(head));
// }