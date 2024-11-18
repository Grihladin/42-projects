/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:35:31 by mratke            #+#    #+#             */
/*   Updated: 2024/11/18 23:27:57 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	put_min_on_top(t_list **stack)
{
	t_value_info	min;
	t_list			*tmp;

	min = find_min(*stack);
	tmp = *stack;
	if (ft_lstsize(*stack) / 2 > min.pos)
	{
		while (*tmp->content != min.value)
		{
			rotate_a(stack);
			tmp = *stack;
		}
	}
	else
	{
		while (*tmp->content != min.value)
		{
			rev_rotate_a(stack);
			tmp = *stack;
		}
	}
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

int	find_max(t_list *stack)
{
	int	max;
	int	pos;
	int	max_pos;

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
	return (max);
}
