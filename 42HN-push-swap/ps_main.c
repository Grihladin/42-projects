/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:48:08 by mratke            #+#    #+#             */
/*   Updated: 2024/11/18 22:44:52 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**arg_array;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = argc;
	arg_array = ft_split(argv[1], ' ');
	fill_list(arg_array, &stack_a);
	if (check_if_sorted(stack_a) == 1)
	{
		ft_printf("Already sorted");
		return (0);
	}
	// ft_printf("------------------\n");
	// print_stacks_side_by_side(stack_a, stack_b);
	// ft_printf("------------------\n");
	while (stack_a != NULL)
	{
		put_min_on_top(&stack_a);
		push_b(&stack_a, &stack_b);
	}
	while (stack_b != NULL)
	{
		push_a(&stack_a, &stack_b);
	}
	// ft_printf("------------------\n");
	// print_stacks_side_by_side(stack_a, stack_b);
	// ft_printf("------------------\n");
	// 	// free lists
	// 	// ft_lstclear(&stack_a, free);
	// 	// ft_lstclear(&stack_b, free);
}
