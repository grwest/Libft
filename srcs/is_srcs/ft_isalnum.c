/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:15:47 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:24:37 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

#ifdef TEST

int		main(void)
{
	int	c;

	c = 'A';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isalnum(c));
	c = 'a';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isalnum(c));
	c = '5';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isalnum(c));
	c = '*';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isalnum(c));
	c = ' ';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n\n", ft_isalnum(c));
	return (0);
}

#endif
