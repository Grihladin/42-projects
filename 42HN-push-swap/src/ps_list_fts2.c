/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_fts2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:35:16 by mratke            #+#    #+#             */
/*   Updated: 2024/11/20 14:49:05 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	print_stacks_side_by_side(t_list *stack_a, t_list *stack_b)
{
	t_list	*current_a;
	t_list	*current_b;

	current_a = stack_a;
	current_b = stack_b;
	ft_printf("Stack A    Stack B\n");
	ft_printf("-------    -------\n");
	while (current_a != NULL || current_b != NULL)
	{
		if (current_a != NULL)
		{
			ft_printf(" %i ", *current_a->content);
			current_a = current_a->next;
		}
		else
			ft_printf(" _");
		if (current_b != NULL)
		{
			ft_printf("        %i\n", *current_b->content);
			current_b = current_b->next;
		}
		else
			ft_printf("        _\n");
	}
}

void	print_stacks(t_list *stack_a, t_list *stack_b)
{
	ft_printf("------------------\n");
	print_stacks_side_by_side(stack_a, stack_b);
	ft_printf("------------------\n");
}
