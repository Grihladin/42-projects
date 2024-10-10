/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:36:52 by mratke            #+#    #+#             */
/*   Updated: 2024/10/10 10:58:59 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d == s)
		return (dest);
	if (d > s && d < s + count)
	{
		while (count > 0)
		{
			d[count] = s[count];
			count--;
		}
	}
	else
	{
		ft_memcpy(d, s, count);
	}
	return (dest);
}

// int	main(void)
// {
// 	int	*arr;
// 	int	*s;

// 	arr[0] = 0;
// 	arr[1] = 1;
// 	arr[2] = 2;
// 	s = malloc(6 * sizeof(int));
// 	ft_memmove(arr + 1, arr, 3 * sizeof(int));
// 	for (size_t i = 0; i < 3; i++)
// 	{
// 		printf("[%i] ", arr[i]);
// 	}
// }
// im mot sure should i put count-- before copy or after,
// i tasted it works booth.

// int	main(void)
// {
// 	char	src[20] = "HelloWorld";

// 	// Move 5 bytes from src+5 to src (non-overlapping)
// 	ft_memmove(src, src + 5, 5);
// 	// Expected result: src should contain "WorldWorld"
// 	printf("Result: %s\n", src);
// 	return (0);
// }
