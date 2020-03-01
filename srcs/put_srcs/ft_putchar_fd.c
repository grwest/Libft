/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:08:30 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 22:19:07 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#ifdef TEST

int		main(void)
{
	char	*p;

	p = strdup("This is a test");
	while (*p)
		ft_putchar_fd(*p++, 1);
	return (0);
}

#endif
