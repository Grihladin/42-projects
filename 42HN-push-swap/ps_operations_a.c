/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:24:13 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 20:05:30 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// The first element of a becomes the last one.
void	rotate_a(t_list **stack)
{
	int	i;

	i = rotate(stack);
	if (i != 0)
		ft_printf("ra\n");
}

// The last element becomes the first one.
void	rev_rotate_a(t_list **stack)
{
	int	i;

	i = rev_rotate(stack);
	if (i != 0)
		ft_printf("rra\n");
}

// Swap the first 2 elements at the top of stack a.
void	swap_a(t_list **stack)
{
	int	i;

	i = swap(stack);
	if (i != 0)
		ft_printf("sa\n");
}

// Take the first element at the top of b and put it at the top of a.
void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*node_to_transfer;

	if (!stack_b || !(*stack_b))
		return ;
	node_to_transfer = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, node_to_transfer);
	ft_printf("pa\n");
}
