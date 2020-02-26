/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:46:13 by grwest            #+#    #+#             */
/*   Updated: 2020/02/21 20:05:56 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
