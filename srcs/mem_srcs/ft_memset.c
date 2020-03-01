/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:28:18 by grwest            #+#    #+#             */
/*   Updated: 2020/02/26 17:00:13 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = (char *)b;
	i = 0;
	while (i < len)
		p[i++] = c;
	return (b);
}

#ifdef TEST

int		main(void)
{
	char	str[50];

	ft_strcpy(str, "This is a string for testing.");
	ft_memset(str, '@', 15);
	printf("%s\n", str);
	return (0);
}

#endif
