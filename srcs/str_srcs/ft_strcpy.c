/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:14:04 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 14:56:36 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*p;

	p = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (p);
}

#ifdef TEST

int		main(void)
{
	char	str[50];

	ft_strcpy(str, "This is a string.");
	printf("This is a string.\n");
	printf("%s\n", str);
	return (0);
}

#endif
