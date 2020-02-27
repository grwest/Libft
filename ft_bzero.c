/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:42:29 by grwest            #+#    #+#             */
/*   Updated: 2020/02/26 16:46:59 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = 0;
}

#ifdef TEST

int		main(void)
{
	char	str[50];

	ft_strcpy(str, "This is a string. This is a string.");
	ft_bzero(str, 15);
	ft_putstr(str);
	return (0);
}

#endif
