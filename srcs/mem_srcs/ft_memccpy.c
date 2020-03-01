/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:08:48 by grwest            #+#    #+#             */
/*   Updated: 2020/02/26 21:20:06 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (dst2[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}

#ifdef TEST

int		main(void)
{
	char	src[50];
	char	dst[50];

	ft_strcpy(src, "This should copy until the x character.");
	ft_strcpy(dst, "This is another string for testing.");
	printf("src before: %s\n", src);
	printf("dst before: %s\n", dst);
	ft_memccpy(dst, src, 'x', 40);
	printf("dst after: %s\n", dst);
	return (0);
}

#endif
