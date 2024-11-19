/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:35:31 by mratke            #+#    #+#             */
/*   Updated: 2024/11/19 19:39:14 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_info	find_min(t_list *stack)
{
	int				min;
	int				pos;
	int				min_pos;
	t_value_info	result;

	min = *stack->content;
	pos = 0;
	min_pos = 0;
	while (stack != NULL)
	{
		if (*stack->content < min)
		{
			min = *stack->content;
			min_pos = pos;
		}
		stack = stack->next;
		pos++;
	}
	result.value = min;
	result.pos = min_pos;
	return (result);
}

t_value_info	find_max(t_list *stack)
{
	int				max;
	int				pos;
	int				max_pos;
	t_value_info	result;

	max = *stack->content;
	pos = 0;
	max_pos = 0;
	while (stack != NULL)
	{
		if (*stack->content > max)
		{
			max = *stack->content;
			max_pos = pos;
		}
		stack = stack->next;
		pos++;
	}
	result.value = max;
	result.pos = max_pos;
	return (result);
}

void	sort_three_nodes(t_list **stack)
{
	t_value_info	max;

	max = find_max(*stack);
	if (max.pos == 0)
	{
		rotate_a(stack);
	}
	else if (max.pos == 1)
	{
		rev_rotate_a(stack);
	}
	if (*(*stack)->content > *(*stack)->next->content)
	{
		swap_a(stack);
	}
}

void	push_and_sort(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->next->next->next != NULL)
	{
		push_b(stack_a, stack_b);
	}
	sort_three_nodes(stack_a);
}
int	calculate_a_spin(t_list *stack_a, t_list *stack_b)
{
	int		min_spin;
	int		pos;
	int		best_pos;
	int		i;
	t_list	*current_b;
	t_list	*current_a;

	min_spin = 2147483647;
	best_pos = 0;
	i = 0;
	current_b = stack_b;
	while (current_b != NULL)
	{
		pos = 0;
		current_a = stack_a;
		while (current_a != NULL && *current_b->content > *current_a->content)
		{
			pos++;
			current_a = current_a->next;
		}
		if (pos < min_spin)
		{
			min_spin = pos;
			best_pos = i;
		}
		current_b = current_b->next;
		i++;
	}
	return (best_pos);
}
