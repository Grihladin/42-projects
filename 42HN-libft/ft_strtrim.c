/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:33:25 by mratke            #+#    #+#             */
/*   Updated: 2024/10/11 16:34:58 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1_len;
	size_t	j;
	char	*result;

	i = 0;
	s1_len = ft_strlen(s1);
	j = 0;
	while (s1_len > 0 && is_in_set(s1[s1_len - 1], set) == 1)
		s1_len--;
	while (s1[i] != '\0' && is_in_set(s1[i], set) == 1)
		i++;
	if (i >= s1_len)
		return (ft_strdup(""));
	result = malloc((s1_len - i + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < s1_len)
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	*trimmed;
// 	int		i;
// 	char	*s;

// 	s = "qqq";
// 	trimmed = ft_strtrim(s, "q");
// 	i = 0;
// 	while (trimmed[i] != '\0')
// 	{
// 		printf("%c", trimmed[i]);
// 		i++;
// 	}
// 	printf("\n len = %i", ft_strlen(s));
// }
