/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:48:08 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 13:18:17 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;
	t_list	*new_node;

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
	swap_b(&stack_a);
	ft_lstprint(stack_a);
	ft_lstclear(&stack_a, free);
}
