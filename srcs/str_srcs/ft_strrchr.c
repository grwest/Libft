/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:31:07 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 15:16:24 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	s += ft_strlen(s);
	while (s >= p)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

#ifdef TEST

int		main(void)
{
	char	s1[50];
	char	*s2;
	char	c;

	c = 'o';
	ft_strcpy(s1, "fourty two silicon valley");
	printf("character: %c\n", c);
	printf("str before: %s\n", s1);
	s2 = ft_strrchr(s1, c);
	printf("str after: %s\n", s2);
	return (0);
}

#endif
