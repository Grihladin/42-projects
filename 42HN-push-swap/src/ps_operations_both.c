/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_both.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:44:57 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 20:21:32 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;

	i = rotate(stack_a);
	j = rotate(stack_b);
	if (i != 0 && j != 0)
		ft_printf("rr\n");
}

void	rev_rotate_both(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;

	i = rev_rotate(stack_a);
	j = rev_rotate(stack_b);
	if (i != 0 && j != 0)
		ft_printf("rrr\n");
}

void	swap_both(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
