/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:56:22 by mratke            #+#    #+#             */
/*   Updated: 2024/11/15 21:29:08 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	*alloc_and_put_int(char *str_num)
{
	int	*content;

	content = (int *)malloc(sizeof(int));
	if (content == NULL)
		return (NULL);
	*content = ft_atoi(str_num);
	return ((void *)content);
}

void	fill_list(int argc, char **argv, t_list **stack)
{
	t_list	*new_node;
	int		i;

	i = 1;
	while (i < argc)
	{
		new_node = ft_lstnew(alloc_and_put_int(argv[i]));
		if (new_node == NULL)
		{
			ft_lstclear(stack, free);
			return ;
		}
		ft_lstadd_back(stack, new_node);
		i++;
	}
}
