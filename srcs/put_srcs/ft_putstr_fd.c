/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:12:02 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 22:21:57 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	while (s && *s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

#ifdef TEST

int		main(void)
{
	ft_putstr_fd("This is a test.", 1);
	return (0);
}

#endif
