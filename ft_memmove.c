/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:31:08 by grwest            #+#    #+#             */
/*   Updated: 2020/02/21 19:45:37 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
