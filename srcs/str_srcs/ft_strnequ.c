/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:28:11 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 20:05:21 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2 && ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}

#ifdef TEST

int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = ft_strdup("This is the first string.");
	s2 = ft_strdup("This is the second string.");
	printf("\ns1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("compare limit: 10\n");
	printf("equal: %d\n", ft_strnequ(s1, s2, 10));
	printf("\ns1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("compare limit: 20\n");
	printf("equal: %d\n\n", ft_strnequ(s1, s2, 20));
	return (0);
}

#endif
