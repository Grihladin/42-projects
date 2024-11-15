/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:39:43 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 13:18:08 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// The first element of b becomes the last.
int	rotate_b(t_list **stack)
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

int	rev_rotate_b(t_list **stack)
{
	t_list	*prelast;
	t_list	*last;

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

// Swap the first 2 elements at the top of stack b.
int	swap_b(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!stack || !(*stack) || !(*stack)->next)
		return (1);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	return (0);
}
