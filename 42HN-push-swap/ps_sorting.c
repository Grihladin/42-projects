/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:35:31 by mratke            #+#    #+#             */
/*   Updated: 2024/11/16 22:49:16 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_list *stack)
{
	while (stack->next != NULL)
	{
		if (*stack->content > *stack->next->content)
		{
			return (0);
		}
		stack = stack->next;
	}
	return (1);
}

void	push_chank_to_b(t_list **stack_a, t_list **stack_b, int chank_size)
{
	int	i;

	i = 0;
	while (i < chank_size)
	{
		push_b(stack_a, stack_b);
		i++;
	}
}

void	sort_chank(t_list **stack)
{
	t_list	*current;

	current = *stack;
	while (current->next != NULL)
	{
		if (*current->content > *current->next->content)
		{
			rotate_b(stack);
			current = *stack;
		}
		else
			current = current->next;
	}
}

void	push_to_chank_a(t_list **stack_a, t_list **stack_b, int chank_size)
{
	int	i;

	i = 0;
	while (i < chank_size)
	{
		push_a(stack_a, stack_b);
		i++;
	}
}
