/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:19:00 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 22:59:52 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	if (!s || !f || !(s2 = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	return (s2);
}

#ifdef TEST

static char	f_toupper(unsigned int i, char c)
{
	i = 0;
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}

int			main(void)
{
	char	*p;

	p = strdup("This is a test.");
	printf("%s\n", p);
	p = ft_strmapi(p, &f_toupper);
	printf("%s\n", p);
	return (0);
}

#endif
