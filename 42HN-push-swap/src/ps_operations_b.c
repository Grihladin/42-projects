/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:39:43 by mratke            #+#    #+#             */
/*   Updated: 2024/11/18 19:49:40 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// The first element of b becomes the last.
void	rotate_b(t_list **stack)
{
	int	i;

	i = rotate(stack);
	if (i != 0)
		ft_printf("rb\n");
}

// The last element becomes the first one.
void	rev_rotate_b(t_list **stack)
{
	int	i;

	i = rev_rotate(stack);
	if (i != 0)
		ft_printf("rrb\n");
}

// Swap the first 2 elements at the top of stack b.
void	swap_b(t_list **stack)
{
	int	i;

	i = swap(stack);
	if (i != 0)
		ft_printf("sb\n");
}

// Take the first element at the top of a and put it at the top of b.
void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*node_to_transfer;

	if (!stack_a || !(*stack_a))
		return ;
	node_to_transfer = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, node_to_transfer);
	ft_printf("pb\n");
}
