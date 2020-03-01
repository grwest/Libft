/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:47:58 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:31:22 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

#ifdef TEST

int		main(void)
{
	int	c;

	c = 'A';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n", ft_tolower(c));
	c = 'a';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n", ft_tolower(c));
	c = '5';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n", ft_tolower(c));
	c = '*';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n", ft_tolower(c));
	c = ' ';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %c\n\n", ft_tolower(c));
	return (0);
}

#endif
