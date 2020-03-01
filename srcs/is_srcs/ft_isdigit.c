/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:14:18 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:23:19 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

#ifdef TEST

int		main(void)
{
	int	c;

	c = 'A';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isdigit(c));
	c = 'a';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isdigit(c));
	c = '5';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isdigit(c));
	c = '*';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isdigit(c));
	c = ' ';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n\n", ft_isdigit(c));
	return (0);
}

#endif
