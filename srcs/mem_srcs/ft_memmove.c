/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:31:08 by grwest            #+#    #+#             */
/*   Updated: 2020/02/26 18:37:49 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len > 0)
		{
			len--;
			dst2[len] = src2[len];
		}
	}
	return (dst);
}

#ifdef TEST

int		main(void)
{
	char	src[50];
	char	dst[50];

	ft_strcpy(src, "hahahahahahahahahahaha");
	ft_strcpy(dst, "This is another string for testing.");
	printf("src before: %s\n", src);
	printf("dst before: %s\n", dst);
	ft_memmove(dst, src, 22);
	printf("dst after: %s\n", dst);
	return (0);
}

#endif
