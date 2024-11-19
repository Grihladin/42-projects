/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:08:12 by mratke            #+#    #+#             */
/*   Updated: 2024/11/19 18:27:51 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// includes
# include "ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>

// linked list structure
typedef struct s_list
{
	int				*content;
	struct s_list	*next;
}					t_list;

typedef struct s_value_info
{
	int				value;
	int				pos;
	int				prev_value;
	int				next_value;
}					t_value_info;

typedef struct s_stack_info
{
	int				max;
	int				min;
	int				size;
}					t_stack_info;
// list functions
t_list				*ft_lstnew(int *content);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				print_stacks_side_by_side(t_list *stack_a, t_list *stack_b);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
int					ft_lstsize(t_list *stack);

// utility functions
void				*alloc_and_put_int(char *str_num);
void				fill_list(char **argv, t_list **stack);
int					check_if_sorted(t_list *stack);
char				**ft_split(char const *s, char c);

// sorting functions

t_value_info		find_min(t_list *stack);
t_value_info		find_max(t_list *stack);
void				push_most_to_b(t_list **stack_a, t_list **stack_b);
void				sort_three_nodes(t_list **stack);

// operations

int					rotate(t_list **stack);
int					rev_rotate(t_list **stack);
int					swap(t_list **stack);

// operations_a

void				rotate_a(t_list **stack);
void				rev_rotate_a(t_list **stack);
void				swap_a(t_list **stack);
void				push_a(t_list **stack_a, t_list **stack_b);

// operations_b

void				rotate_b(t_list **stack);
void				rev_rotate_b(t_list **stack);
void				swap_b(t_list **stack);
void				push_b(t_list **stack_a, t_list **stack_b);

// operations_both

void				rotate_both(t_list **stack_a, t_list **stack_b);
void				rev_rotate_both(t_list **stack_a, t_list **stack_b);
void				swap_both(t_list **stack_a, t_list **stack_b);

#endif
