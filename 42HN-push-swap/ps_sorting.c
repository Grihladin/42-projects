/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sorting_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:35:31 by mratke            #+#    #+#             */
/*   Updated: 2025/07/06 00:36:48 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	radix_sort(t_list **stack_a, t_list **stack_b, int max_num,
		int stack_size)
{
	int	max_bits;
	int	i;
	int	j;

	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < stack_size)
		{
			if (((*(*stack_a)->content >> i) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			j++;
		}
		while (*stack_b != NULL)
			push_a(stack_a, stack_b);
		i++;
	}
}

void	normalize_stack(t_list *stack, int offset)
{
	while (stack != NULL)
	{
		*stack->content += offset;
		stack = stack->next;
	}
}

void	denormalize_stack(t_list *stack, int offset)
{
	while (stack != NULL)
	{
		*stack->content -= offset;
		stack = stack->next;
	}
}

void	tiny_sort(t_list **stack)
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

void	radix_sort_with_negatives(t_list **stack_a, t_list **stack_b, int stack_size)
{
	int	min_val;
	int	max_val;
	int	offset;
	int	normalized_max;
	min_val = find_min(*stack_a).value;
	max_val = find_max(*stack_a).value;
	if (min_val >= 0)
	{
		radix_sort(stack_a, stack_b, max_val, stack_size);
		return;
	}
	offset = -min_val;
	normalized_max = max_val + offset;
	normalize_stack(*stack_a, offset);
	radix_sort(stack_a, stack_b, normalized_max, stack_size);
	denormalize_stack(*stack_a, offset);
}
