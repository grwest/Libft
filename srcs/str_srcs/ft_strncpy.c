/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:19:54 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 13:20:28 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

#ifdef TEST

int		main(void)
{
	char	str[50];

	ft_strncpy(str, "This should stop after 15 characters.", 15);
	printf("Before: This should stop after 15 characters.\n");
	printf("After: %s\n", str);
	return (0);
}

#endif
