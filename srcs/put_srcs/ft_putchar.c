/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:55:47 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 23:36:44 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#ifdef TEST

int		main(void)
{
	char	*p;

	p = strdup("This is a test");
	while (*p)
		ft_putchar(*p++);
	return (0);
}

#endif
