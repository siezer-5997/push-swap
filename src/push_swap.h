/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:43:43 by sizerese          #+#    #+#             */
/*   Updated: 2023/11/02 19:09:26 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "../Libft/libft.h"

// the structure used to define a stack in m program

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*pre;
}t_stack;

// Two main functions which are processing the recieved 
// arguments and parsing them into numbers to be added to stack a
t_stack	*ft_conversion_stack(int argc, char **argv);
t_stack	*ft_sub_conversiton(char **argv);
t_stack	*ft_add_conversion(int argc, char **argv, t_stack *a, int i);

// push_swap stack manupulation functions
t_stack	*ft_new_stack(long num);
t_stack	*ft_last_stack(t_stack *stack);
void	ft_add_back(t_stack **stack, t_stack *new_stack);
int		ft_my_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

// additional functions in utensils to deal with stacks and errors
void	ft_error(void);
int		ft_isdigit(int c);

#endif