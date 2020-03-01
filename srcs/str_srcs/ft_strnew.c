/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:26:20 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 19:02:38 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

#ifdef TEST

int		main(void)
{
	char	*p;

	p = ft_strnew(20);
	ft_strcpy(p, "This is a test.");
	printf("%s\n", p);
	return (0);
}

#endif
