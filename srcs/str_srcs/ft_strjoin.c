/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:59:57 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 20:13:07 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;

	if (!s1 || !s2 || !(fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(fresh, s1);
	ft_strcat(fresh, s2);
	return (fresh);
}

#ifdef TEST

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = ft_strdup("Test1");
	s2 = ft_strdup("Test2");
	s3 = ft_strjoin(s1, s2);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s\n", s3);
	return (0);
}

#endif
