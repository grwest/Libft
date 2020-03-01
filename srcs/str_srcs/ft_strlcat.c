/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:02:10 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 14:33:46 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 1;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	dst += dstlen;
	while (*src && dstlen + i++ < dstsize)
		*dst++ = *src++;
	*dst = '\0';
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	return (srclen + dstlen);
}

#ifdef TEST

int		main(void)
{
	char	s1[50];
	char	s2[50];
	size_t	catlen;

	catlen = 30;
	ft_strcpy(s1, "This is the first string.");
	ft_strcpy(s2, "This is the second string.");
	printf("s1: %s\ns1: %s\n", s1, s2);
	printf("cat limit: %zu\n", catlen);
	printf("attempted string length: %zu\n", ft_strlcat(s1, s2, catlen));
	printf("s1 cat with s2: %s\n", s1);
	return (0);
}

#endif
