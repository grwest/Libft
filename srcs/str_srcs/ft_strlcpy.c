/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:44:27 by grwest            #+#    #+#             */
/*   Updated: 2020/03/01 06:53:37 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize != 0)
		*dst = '\0';
	return (srclen);
}

#ifdef TEST

int		main(void)
{
	char	*s1;
	char	*s2;
	size_t	cpylen;

	cpylen = 3;
	s1 = ft_strdup("rrrrr");
	s2 = ft_strdup("lorem ipsum");
	printf("s1: %s\ns1: %s\n", s1, s2);
	printf("cat limit: %zu\n", cpylen);
	printf("attempted string length: %zu\n", ft_strlcpy(s1, s2, cpylen));
	printf("s1 cat with s2: %s\n", s1);
	return (0);
}

#endif
