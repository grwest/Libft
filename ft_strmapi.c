/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:19:00 by grwest            #+#    #+#             */
/*   Updated: 2020/02/23 00:22:04 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	if (!s || !f)
		return (NULL);
	s2 = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	return (s2);
}
