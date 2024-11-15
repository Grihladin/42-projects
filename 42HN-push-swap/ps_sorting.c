/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:35:31 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 22:07:08 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_list *stack)
{
	while (stack->next != NULL)
	{
		if (*stack->content > *stack->next->content)
		{
			return (0);
		}
		stack = stack->next;
	}
	ft_printf("Already sorted\n");
	return (1);
}
