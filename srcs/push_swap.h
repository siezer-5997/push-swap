/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:43:43 by sizerese          #+#    #+#             */
/*   Updated: 2023/12/16 21:14:19 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
# include "../Libft/libft.h"

// the structure used to define a stack in m program

typedef struct s_stack
{
	long			nbr;
	int				final_index;
	int				push_price;
	int				above_median;
	int				cheapest;
	long			index;
	struct s_stack	*next;
	struct s_stack	*previous;
	struct s_stack	*target_node;
}t_stack;

// algorithm used to sort stack with any size into 3 size first
// and then using another algorithm to initialize both stacks and move nodes
void	move_nodes(t_stack **a, t_stack **b);
void	init_nodes(t_stack *a, t_stack *b);

// stack initializations and setting index of stacks 
void	ft_set_target(t_stack *a, t_stack *b);
void	ft_set_price(t_stack *a, t_stack *b);
void	ft_set_cheapest(t_stack *b);
t_stack	*ft_find_cheapest(t_stack *b);
// Functions to receive the 
// arguments and parsing them into numbers to be added to stack a
t_stack	*ft_conversion_stack(int argc, char **argv, int *index);
void	ft_push_swap(t_stack **a, t_stack **b);
int		check_repetition(t_stack *a, int nbr);
int		ft_stack_sorted(t_stack *a);
t_stack	*find_highest_node(t_stack *a);
t_stack	*find_smallest_node(t_stack *stack);

// push_swap stack manupulation functions
t_stack	*ft_new_stack(long num);
int		ft_stack_size(t_stack *stack);
t_stack	*ft_last_stack(t_stack *stack);
t_stack	*ft_before_last_stack(t_stack *stack);
void	ft_add_back(t_stack **stack, t_stack *new_node, int *index);
int		ft_my_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*my_ft_strjoin(char *my_stash, char *buffer);

// functions that help with index modification
t_stack	*ft_assign_index(t_stack *a);
void	ft_set_index(t_stack *a);
t_stack	*ft_create_sum(void);
void	ft_display_stack(t_stack *a);
void	ft_display_both(t_stack *a, t_stack *b);

// Instructions funcitons 
void	swap_a(t_stack **a);
void	swap_b(t_stack **b);
void	swap_ab(t_stack **a, t_stack **b);
void	push_a(t_stack **a, t_stack **b);
void	push_b(t_stack **a, t_stack **b);
void	rt_a(t_stack **a);
void	rt_b(t_stack **b);
void	rt_ab(t_stack **a, t_stack **b);
void	rrt_a(t_stack **a);
void	rrt_b(t_stack **b);
void	rrt_ab(t_stack **a, t_stack **b);

// additional functions in utensils to deal with stacks and errors
void	ft_error(char *str);
void	ft_free_it(char **str);
void	ft_free_nodes(t_stack **stack);
int		ft_check_for_space_ol(char **str);
int		ft_isdigit(int c);

#endif