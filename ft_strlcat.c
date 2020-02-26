/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:02:10 by grwest            #+#    #+#             */
/*   Updated: 2020/02/21 19:53:23 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	catlen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	catlen = 0;
	while (src[catlen] && (dstlen + catlen + 1) < dstsize)
	{
		dst[dstlen + catlen] = src[catlen];
		catlen++;
	}
	dst[dstlen + catlen] = '\0';
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	else
		return (srclen + dstlen);
}
