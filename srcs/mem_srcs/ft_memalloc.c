/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:10:20 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:36:41 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!(mem = malloc(size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

#ifdef TEST

int		main(void)
{
	char	*str;

	str = (char *)ft_memalloc(ft_strlen("This is a test.") + 1);
	ft_strcpy(str, "This is a test.");
	printf("%s\n", str);
	return (0);
}

#endif
