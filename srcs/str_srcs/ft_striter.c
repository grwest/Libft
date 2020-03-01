/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:37:50 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 22:53:45 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	while (s && *s && *f)
	{
		f(s);
		s++;
	}
}

#ifdef TEST

static void	f_toupper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - ('a' - 'A');
}

int			main(void)
{
	char	*p;

	p = strdup("This is a test.");
	printf("%s\n", p);
	ft_striter(p, &f_toupper);
	printf("%s\n", p);
	return (0);
}

#endif
