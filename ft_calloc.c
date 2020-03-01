/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:41:08 by grwest            #+#    #+#             */
/*   Updated: 2020/02/29 00:42:00 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (!(mem = malloc(count * size)))
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}

#ifdef TEST

int		main(void)
{
	char	*str;

	str = (char *)ft_calloc(ft_strlen("This is a test."), 1);
	ft_strcpy(str, "This is a test.");
	printf("%s\n", str);
	return (0);
}

#endif
