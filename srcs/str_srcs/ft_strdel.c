/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:29:04 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 19:03:43 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_strdel(char **as)
{
	ft_memdel((void *)as);
}

#ifdef TEST

int		main(void)
{
	char	**array;
	int		i;

	i = 0;
	array = ft_strsplit("this is a test", ' ');
	printf("\narray before:\n");
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
	printf("%s\n", array[3]);
	ft_strdel(array);
	printf("\narray after memdel:\n");
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
	printf("%s\n\n", array[3]);
	return (0);
}

#endif
