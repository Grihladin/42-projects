/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:35:31 by mratke            #+#    #+#             */
/*   Updated: 2024/11/18 21:38:04 by mratke           ###   ########.fr       */
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

void	put_max_on_top(t_list **stack)
{
	t_max_info	max;
	t_list		*tmp;

	max = find_max(*stack);
	tmp = *stack;
	if (ft_lstsize(*stack) / 2 > max.pos)
	{
		while (*tmp->content != max.value)
		{
			rotate_a(stack);
			tmp = *stack;
		}
	}
	else
	{
		while (*tmp->content != max.value)
		{
			rev_rotate_a(stack);
			tmp = *stack;
		}
	}
}

t_max_info	find_max(t_list *stack)
{
	int			max;
	int			pos;
	int			max_pos;
	t_max_info	result;

	max = *stack->content;
	pos = 0;
	max_pos = 0;
	while (stack != NULL)
	{
		if (*stack->content < max)
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
