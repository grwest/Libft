/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:46:13 by grwest            #+#    #+#             */
/*   Updated: 2020/02/26 19:00:08 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	c2;

	i = 0;
	p = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == c2)
			return (p + i);
		i++;
	}
	return (NULL);
}

#ifdef TEST

int		main(void)
{
	char	str[50];

	ft_strcpy(str, "This is a string for testing.");
	printf("str before: %s\n", str);
	printf("str will start at: n\n");
	ft_strcpy(str, ft_memchr(str, 'n', 20));
	printf("str after: %s\n", str);
	return (0);
}

#endif
