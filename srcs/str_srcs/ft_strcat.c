/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:54:12 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 13:49:58 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*s3;

	s3 = s1;
	s1 += ft_strlen(s1);
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s3);
}

#ifdef TEST

int		main(void)
{
	char	s1[50];
	char	s2[50];

	ft_strcpy(s1, "This is the first string.");
	ft_strcpy(s2, "This is the second string.");
	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("s1 cat with s2: %s\n", ft_strcat(s1, s2));
	return (0);
}

#endif
