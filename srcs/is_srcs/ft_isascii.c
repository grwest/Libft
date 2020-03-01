/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:07:37 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:26:40 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

#ifdef TEST

int		main(void)
{
	int	c;

	c = 'A';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isascii(c));
	c = 'a';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isascii(c));
	c = '5';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isascii(c));
	c = '*';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isascii(c));
	c = ' ';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n\n", ft_isascii(c));
	return (0);
}

#endif
