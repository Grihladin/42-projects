/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:35:31 by mratke            #+#    #+#             */
/*   Updated: 2024/11/20 16:17:25 by mratke           ###   ########.fr       */
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
		while (j < stack_size)
		{
			if (((*(*stack_a)->content >> i) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			j++;
		}
		j = 0;
		while (*stack_b != NULL)
			push_a(stack_a, stack_b);
		i++;
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
