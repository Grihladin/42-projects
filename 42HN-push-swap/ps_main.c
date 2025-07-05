/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:48:08 by mratke            #+#    #+#             */
/*   Updated: 2025/07/06 00:29:00 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**arg_array;

	if (argc != 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	arg_array = ft_split(argv[1], ' ');
	fill_stack(arg_array, &stack_a);
	free(arg_array);
	if (check_if_sorted(stack_a) == 1)
		return (0);
	if (ft_lstsize(stack_a) == 3)
		tiny_sort(&stack_a);
	else
		radix_sort_with_negatives(&stack_a, &stack_b, ft_lstsize(stack_a));
	ft_lstclear(&stack_a, free);
	free(stack_b);
}
