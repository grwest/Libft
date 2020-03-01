/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:38:16 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:12:27 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

#ifdef TEST

int		main(void)
{
	char	*s1;
	char	*s2;
	int		i;

	i = 5;
	s1 = ft_strdup("This is the first string.");
	s2 = ft_strdup("This is the second string.");
	printf("\ns1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("compare limit: %d\n", i);
	printf("s1 - s2 = %d\n", ft_strncmp(s1, s2, i));
	i = 20;
	printf("\ns1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("compare limit: %d\n", i);
	printf("s1 - s2 = %d\n\n", ft_strncmp(s1, s2, i));
	return (0);
}

#endif
