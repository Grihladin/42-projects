/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:08:12 by mratke            #+#    #+#             */
/*   Updated: 2024/11/20 16:17:17 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// includes
# include "ft_printf/ft_printf.h"
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
}					t_value_info;

// list functions

t_list				*ft_lstnew(int *content);
t_list				*ft_lstlast(t_list *lst);
int					ft_lstsize(t_list *stack);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				print_stacks_side_by_side(t_list *stack_a, t_list *stack_b);
void				print_stacks(t_list *stack_a, t_list *stack_b);

// utility functions

void				*alloc_and_put_int(char *str_num);
void				fill_stack(char **argv, t_list **stack);
char				**ft_split(char const *s, char c);

// sorting functions

t_value_info		find_max(t_list *stack);
void				tiny_sort(t_list **stack);
int					check_if_sorted(t_list *stack);
void				radix_sort(t_list **stack_a, t_list **stack_b, int max_num,
						int stack_size);

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
