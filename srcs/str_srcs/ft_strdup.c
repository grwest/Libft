/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:46:32 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 22:46:48 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (!(s2 = ft_strnew(ft_strlen(s1))))
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}

#ifdef TEST

int		main(void)
{
	char	s1[50];
	char	*s2;

	ft_strcpy(s1, "This is a string.");
	s2 = ft_strdup(s1);
	printf("src: %s\n", s1);
	printf("dup: %s\n", s2);
	return (0);
}

#endif
