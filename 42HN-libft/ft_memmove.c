/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:36:52 by mratke            #+#    #+#             */
/*   Updated: 2024/10/09 20:29:53 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char)dest;
	s = (unsigned char)src;
	i = 0;
	if (d == s)
	{
		return (d);
	}
	if (d > s && d < s + count)
	{
		while (count > 0)
		{
			d[count] = s[count];
			count--;
		}
	}
}
