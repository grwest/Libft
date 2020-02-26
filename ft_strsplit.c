/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:38:07 by grwest            #+#    #+#             */
/*   Updated: 2020/02/25 17:58:41 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!s || !(array = (char**)malloc(sizeof(char*) * (word_count(s, c) + 1))))
		return (NULL);
	if (word_count(s, c) > 0)
	{
		while (*s)
		{
			while (*s == c)
				s++;
			if (*s == '\0')
				break ;
			while (s[len] && s[len] != c)
				len++;
			array[i++] = ft_strsub(s, 0, len);
			s += len;
			len = 0;
		}
	}
	array[i] = NULL;
	return (array);
}
