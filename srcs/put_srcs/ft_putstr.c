/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:57:46 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 22:12:35 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putstr(char const *s)
{
	while (s && *s)
	{
		ft_putchar(*s);
		s++;
	}
}

#ifdef TEST

int		main(void)
{
	ft_putstr("This is a test.");
	return (0);
}

#endif
