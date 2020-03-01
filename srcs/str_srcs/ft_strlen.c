/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:02:55 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 12:56:31 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

#ifdef TEST

int		main(void)
{
	char	s[50];

	strcpy(s, "This is a string.");
	printf("s: %s\n", s);
	printf("len of s: %zu\n", ft_strlen(s));
	return (0);
}

#endif
