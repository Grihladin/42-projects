/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:24:13 by mratke            #+#    #+#             */
/*   Updated: 2024/11/07 20:21:11 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// The first element becomes the last one.
int	rotate_a(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*last;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return (1);
	tmp = *stack_a;
	*stack_a = tmp->next;
	tmp->next = NULL;
	last = ft_lstlast(*stack_a);
	last->next = tmp;
	return (0);
}
