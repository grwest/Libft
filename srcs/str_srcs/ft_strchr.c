/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:24:27 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 14:47:28 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
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

	c = 's';
	ft_strcpy(s1, "fourty two silicon valley");
	printf("character: %c\n", c);
	printf("str before: %s\n", s1);
	s2 = ft_strchr(s1, c);
	printf("str after: %s\n", s2);
	return (0);
}

#endif
