/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:48:08 by mratke            #+#    #+#             */
/*   Updated: 2024/11/18 20:51:14 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		chunk_size;
	int		i;
	int		j;

	stack_a = NULL;
	stack_b = NULL;
	fill_list(argc, argv, &stack_a);
	if (check_if_sorted(stack_a) == 1)
	{
		ft_printf("Already sorted");
		return (0);
	}
	// printf unmodified lists
	ft_printf("stack_a\n");
	ft_lstprint(stack_a);
	ft_printf("\n");
	ft_printf("stack_b\n");
	ft_lstprint(stack_b);
	ft_printf("------------------\n");
	// operations to do
	i = 0;
	j = 0;
	chunk_size = 3;
	while (check_if_sorted(stack_a) != 1)
	{
		while (i < chunk_size)
		{
			push_b(&stack_a, &stack_b);
			i++;
		}
		i = 0;
		while (i < chunk_size)
		{
			put_max_on_top(&stack_b, chunk_size);
			push_a(&stack_a, &stack_b);
			rotate_a(&stack_a);
			i++;
		}
		i = 0;
		j++;
	}
	// printf modified lists
	ft_printf("------------------\n");
	ft_printf("stack_a updated\n");
	ft_lstprint(stack_a);
	ft_printf("\n");
	ft_printf("stack_b updated\n");
	ft_lstprint(stack_b);
	// free lists
	// ft_lstclear(&stack_a, free);
	// ft_lstclear(&stack_b, free);
}
