/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:08:12 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 12:55:39 by mratke           ###   ########.fr       */
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

// rules_a

int					rotate_a(t_list **stack);
int					rev_rotate_a(t_list **stack);
int					swap_a(t_list **stack);

// rules_b

int					rotate_b(t_list **stack);
int					rev_rotate_b(t_list **stack);
int					swap_b(t_list **stack);

// rules_both

int					rotate_both(t_list **stack_a, t_list **stack_b);
int					rev_rotate_both(t_list **stack_a, t_list **stack_b);

#endif
