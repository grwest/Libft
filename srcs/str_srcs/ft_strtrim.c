/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:32:25 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 20:19:44 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*s2;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
	{
		s2 = ft_strsub(s, 0, 0);
		return (s2);
	}
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	len = len - i + 1;
	s2 = ft_strsub(s, i, len);
	return (s2);
}

#ifdef TEST

int		main(void)
{
	char	*str;

	str = ft_strdup("     hello world    ");
	printf("Before trim: %s\n", str);
	str = ft_strtrim(str);
	printf("After trim: %s\n", str);
	return (0);
}

#endif
