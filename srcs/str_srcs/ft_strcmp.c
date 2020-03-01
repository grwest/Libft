/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:00:19 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 16:11:07 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

#ifdef TEST

int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = ft_strdup("This is the first string.");
	s2 = ft_strdup("This is the second string.");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s1 - s2 = %d\n", ft_strcmp(s1, s2));
	return (0);
}

#endif
