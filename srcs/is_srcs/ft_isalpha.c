/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:11:47 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:20:20 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

#ifdef TEST

int		main(void)
{
	int	c;

	c = 'A';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isalpha(c));
	c = 'a';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isalpha(c));
	c = '5';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isalpha(c));
	c = '*';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n", ft_isalpha(c));
	c = ' ';
	printf("\nChar: %c\n", c);
	printf("Is Alpha: %d\n\n", ft_isalpha(c));
	return (0);
}

#endif
