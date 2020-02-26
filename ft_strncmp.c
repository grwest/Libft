/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:38:16 by grwest            #+#    #+#             */
/*   Updated: 2020/02/21 14:37:52 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && *s2 && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
