/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:49:15 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 22:59:16 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s && *s && *f)
	{
		f(i, s);
		s++;
		i++;
	}
}

#ifdef TEST

static void	f_toupper(unsigned int i, char *c)
{
	i = 0;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - ('a' - 'A');
}

int			main(void)
{
	char	*p;

	p = strdup("This is a test.");
	printf("%s\n", p);
	ft_striteri(p, &f_toupper);
	printf("%s\n", p);
	return (0);
}

#endif
