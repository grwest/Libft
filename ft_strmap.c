/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:56:51 by grwest            #+#    #+#             */
/*   Updated: 2020/02/23 00:21:34 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	if (!s || !f)
		return (NULL);
	s2 = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		s2[i] = f(s[i]);
		i++;
	}
	return (s2);
}
