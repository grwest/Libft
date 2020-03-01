/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:45:44 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 20:09:47 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*fresh;

	i = 0;
	if (!s || !(fresh = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		fresh[i] = s[i + start];
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}

#ifdef TEST

int		main(void)
{
	char	*str;

	str = ft_strdup("This is a test.");
	str = ft_strsub(str, 8, 6);
	printf("%s\n", str);
	return (0);
}

#endif
