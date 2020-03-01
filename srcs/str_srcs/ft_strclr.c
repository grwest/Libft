/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:34:03 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 19:06:24 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_strclr(char *s)
{
	while (s && *s)
	{
		*s = '\0';
		s++;
	}
}

#ifdef TEST

int		main(void)
{
	char	*p;

	p = ft_strdup("This is a test.");
	printf("before clear: %s\n", p);
	ft_strclr(p);
	printf("after clear: %s\n", p);
	return (0);
}

#endif
