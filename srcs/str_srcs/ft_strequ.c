/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:25:31 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 20:01:16 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2 && ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}

#ifdef TEST

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = ft_strdup("This is the first string.");
	s2 = ft_strdup("This is the second string.");
	s3 = ft_strdup("These strings are equal.");
	s4 = ft_strdup("These strings are equal.");
	printf("\ns1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s1 & s2 equal: %d\n", ft_strequ(s1, s2));
	printf("\ns3: %s\n", s3);
	printf("s4: %s\n", s4);
	printf("s3 & s4 equal: %d\n\n", ft_strequ(s3, s4));
	return (0);
}

#endif
