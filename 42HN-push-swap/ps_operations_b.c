/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:39:43 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 19:15:50 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// The first element of b becomes the last.
void	rotate_b(t_list **stack)
{
	rotate(stack);
	ft_printf("rb\n");
}

// The last element becomes the first one.
void	rev_rotate_b(t_list **stack)
{
	rev_rotate(stack);
	ft_printf("rrb\n");
}

// Swap the first 2 elements at the top of stack b.
void	swap_b(t_list **stack)
{
	swap(stack);
	ft_printf("sb\n");
}
