/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_fts2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:35:16 by mratke            #+#    #+#             */
/*   Updated: 2024/11/18 20:22:26 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst != NULL)
	{
		current = lst;
		while (current->next != NULL)
		{
			current = current->next;
		}
		return (current);
	}
	return (NULL);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
	}
}

int	ft_lstsize(t_list *stack)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
