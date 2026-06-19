/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:53:04 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 19:10:09 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	tmp = *stack;
	*stack = tmp->next;
	tmp->next = NULL;
	last = ft_lstlast(*stack);
	last->next = tmp;
	return (1);
}

int	rev_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*prelast;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	prelast = *stack;
	while (prelast->next && prelast->next->next)
	{
		prelast = prelast->next;
	}
	last = prelast->next;
	prelast->next = NULL;
	last->next = *stack;
	*stack = last;
	return (1);
}

int	swap(t_list **stack)
{
	t_list	*second;
	t_list	*first;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	return (1);
}
