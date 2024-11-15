/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:24:13 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 19:16:06 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// The first element of a becomes the last one.
void	rotate_a(t_list **stack)
{
	rotate(stack);
	ft_printf("ra\n");
}

// The last element becomes the first one.
void	rev_rotate_a(t_list **stack)
{
	rev_rotate(stack);
	ft_printf("rra\n");
}

// Swap the first 2 elements at the top of stack a.
void	swap_a(t_list **stack)
{
	swap(stack);
	ft_printf("sa\n");
}
