/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:06:28 by grwest            #+#    #+#             */
/*   Updated: 2020/02/26 19:15:58 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (s1 == s2 || n == 0)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
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
	printf("s1 - s2 = %d\n", ft_memcmp(s1, s2, 20));
	return (0);
}

#endif
