/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:07:38 by mratke            #+#    #+#             */
/*   Updated: 2024/10/11 16:37:40 by mratke           ###   ########.fr       */
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
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > (unsigned int)s_len)
		len = 0;
	if (s_len < len)
		len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
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
// 	char	*str;
// 	size_t	size;
// 	char	*ret;
// 	int		i;

// 	i = 0;
// 	str = "01234";
// 	size = 10;
// 	ret = ft_substr(str, 10, size);
// 	i = 0;
// 	while (ret[i] != '\0')
// 	{
// 		printf("%c", ret[i]);
// 		i++;
// 	}
// }
