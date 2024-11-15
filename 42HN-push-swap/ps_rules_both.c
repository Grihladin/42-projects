/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules_both.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:44:57 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 12:58:04 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_both(t_list **stack_a, t_list **stack_b)
{
	rotate_a(&stack_a);
	rotate_b(&stack_b);
	return (0);
}

int	rev_rotate_both(t_list **stack_a, t_list **stack_b)
{
	rev_rotate_a(&stack_a);
	rev_rotate_b(&stack_b);
	return (0);
}

int	swap_both(t_list **stack_a, t_list **stack_b)
{
	swap_a(&stack_a);
	swap_b(&stack_b);
}
