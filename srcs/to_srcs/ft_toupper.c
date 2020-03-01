/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:55:24 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:30:18 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}

#ifdef TEST

int		main(void)
{
	int	c;

	c = 'A';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n", ft_toupper(c));
	c = 'a';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n", ft_toupper(c));
	c = '5';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n", ft_toupper(c));
	c = '*';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n", ft_toupper(c));
	c = ' ';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n\n", ft_toupper(c));
	return (0);
}

#endif
