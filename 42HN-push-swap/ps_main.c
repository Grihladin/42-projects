/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:48:08 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 20:41:11 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*new_node;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (i < argc)
	{
		new_node = ft_lstnew(alloc_and_put_int(argv[i]));
		if (!new_node)
		{
			ft_lstclear(&stack_a, free);
			return (1);
		}
		ft_lstadd_back(&stack_a, new_node);
		i++;
	}
	new_node = ft_lstnew(alloc_and_put_int("42"));
	ft_lstadd_back(&stack_b, new_node);
	push_b(&stack_a, &stack_b);
	rotate_both(&stack_a, &stack_b);
	ft_printf("stack_a\n");
	ft_lstprint(stack_a);
	ft_printf("\n");
	ft_printf("stack_b\n");
	ft_lstprint(stack_b);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
}
