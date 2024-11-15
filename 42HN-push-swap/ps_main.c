/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:48:08 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 21:31:00 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	fill_list(argc, argv, &stack_a);
	// fill stack_b
	fill_list(argc, argv, &stack_b);
	// printf unmodified lists
	ft_printf("stack_a\n");
	ft_lstprint(stack_a);
	ft_printf("\n");
	ft_printf("stack_b\n");
	ft_lstprint(stack_b);
	ft_printf("------------------\n");
	// operations to do
	push_a(&stack_a, &stack_b);
	rotate_b(&stack_b);
	// printf modified lists
	ft_printf("------------------\n");
	ft_printf("stack_a updated\n");
	ft_lstprint(stack_a);
	ft_printf("\n");
	ft_printf("stack_b updated\n");
	ft_lstprint(stack_b);
	// free lists
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
}
