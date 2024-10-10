/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:07:38 by mratke            #+#    #+#             */
/*   Updated: 2024/10/10 22:28:39 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PROBLEMS
// 1
// For example, if len = 10,
// 	but the string from position start has only 5 characters left,
// 	you are still allocating space for 10 characters, which is wasteful.
//

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		result[0] = '\0';
		return (result);
	}
	i = 0;
	j = (size_t)start;
	while (i < len && s[j] != '\0')
	{
		result[i] = s[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	s1[50] = "Michael Ratke";
// 	char	*s2;
// 	int		i;

// 	i = 0;
// 	s2 = ft_substr(s1, 100, 5);
// 	while (s2[i] != '\0')
// 	{
// 		printf("%c", s2[i]);
// 		i++;
// 	}
// }
