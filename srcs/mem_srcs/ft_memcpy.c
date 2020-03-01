/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:47:31 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 12:47:27 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

#ifdef TEST

int		main(void)
{
	char	src[50];
	char	dst[50];

	ft_strcpy(src, "hahahahahahahahahahahahaha");
	ft_strcpy(dst, "This is another string for testing.");
	printf("src before: %s\n", src);
	printf("dst before: %s\n", dst);
	ft_memcpy(dst, src, 22);
	printf("dst after: %s\n", dst);
	return (0);
}

#endif
