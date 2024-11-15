/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:08:12 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 20:18:12 by mratke           ###   ########.fr       */
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
	void			*content;
	struct s_list	*next;
}					t_list;

// list functions
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstprint(t_list *head);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));

// utility functions
void				*alloc_and_put_int(char *str_num);

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
