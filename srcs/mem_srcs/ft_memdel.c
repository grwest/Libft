/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:23:22 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:58:10 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
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
	ft_memdel((void *)array);
	printf("\narray after memdel:\n");
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
	printf("%s\n\n", array[3]);
	return (0);
}

#endif
