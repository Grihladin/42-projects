/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:24:13 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 19:31:32 by mratke           ###   ########.fr       */
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
