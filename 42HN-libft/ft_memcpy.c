/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:30:25 by mratke            #+#    #+#             */
/*   Updated: 2024/10/10 10:59:05 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < count)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int	*arr1;
// 	int	*arr2;

// 	arr1 = malloc(3 * sizeof(int));
// 	arr2 = malloc(3 * sizeof(int));
// 	arr2[0] = 4;
// 	arr2[1] = 2;
// 	arr2[2] = 2;
// 	ft_memcpy(arr1, arr2, 4);
// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("[%i] ", arr1[i]);
// 	}
// }
