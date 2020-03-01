/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:05:31 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 22:17:10 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else
	{
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

#ifdef TEST

int		main(void)
{
	ft_putnbr(1234);
	return (0);
}

#endif
