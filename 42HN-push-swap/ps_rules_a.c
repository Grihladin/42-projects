/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:24:13 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 13:11:44 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// The first element of a becomes the last one.
int	rotate_a(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (!stack || !(*stack) || !(*stack)->next)
		return (1);
	tmp = *stack;
	*stack = tmp->next;
	tmp->next = NULL;
	last = ft_lstlast(*stack);
	last->next = tmp;
	return (0);
}

// The last element becomes the first one.
int	rev_rotate_a(t_list **stack)
{
	t_list	*last;
	t_list	*prelast;

	if (!stack || !(*stack) || !(*stack)->next)
		return (1);
	prelast = *stack;
	while (prelast->next && prelast->next->next)
	{
		prelast = prelast->next;
	}
	last = prelast->next;
	prelast->next = NULL;
	last->next = *stack;
	*stack = last;
	return (0);
}

// Swap the first 2 elements at the top of stack a.
int	swap_a(t_list **stack)
{
	t_list	*second;
	t_list	*first;

	if (!stack || !(*stack) || !(*stack)->next)
		return (1);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	return (0);
}
