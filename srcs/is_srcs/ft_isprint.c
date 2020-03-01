/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:58:30 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:27:43 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

#ifdef TEST

int		main(void)
{
	int	c;

	c = 'A';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isprint(c));
	c = 'a';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isprint(c));
	c = '5';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isprint(c));
	c = '*';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isprint(c));
	c = ' ';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n\n", ft_isprint(c));
	return (0);
}

#endif
