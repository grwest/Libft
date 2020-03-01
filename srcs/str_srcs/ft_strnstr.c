/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:42:49 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 15:41:29 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j])
		{
			if (i + j >= len)
				return (NULL);
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
	int		len;

	len = 5;
	s1 = ft_strdup("fourty two silicon valley");
	s2 = ft_strdup("silicon");
	printf("\nhaystack: %s\n", s1);
	printf("needle: %s\n", s2);
	printf("search length: %d\n", len);
	printf("str: %s\n", ft_strnstr(s1, s2, len));
	len = 20;
	printf("\nhaystack: %s\n", s1);
	printf("needle: %s\n", s2);
	printf("search length: %d\n", len);
	printf("str: %s\n\n", ft_strnstr(s1, s2, len));
	return (0);
}

#endif
