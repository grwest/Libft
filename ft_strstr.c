/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:27:34 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 15:35:01 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j])
		{
			if (!needle[j + 1])
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

#ifdef TEST

int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = ft_strdup("fourty two silicon valley");
	s2 = ft_strdup("silicon");
	printf("haystack: %s\n", s1);
	printf("needle: %s\n", s2);
	printf("str: %s\n", ft_strstr(s1, s2));
	return (0);
}

#endif
