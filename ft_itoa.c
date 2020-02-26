/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:00:43 by grwest            #+#    #+#             */
/*   Updated: 2020/02/25 19:30:44 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	num_append(int *i, char *s, int n)
{
	int	n_mod;

	n_mod = 0;
	if (n >= 10)
	{
		n_mod = n % 10 + '0';
		n = n / 10;
		num_append(i, s, n);
		s[(*i)++] = (char)n_mod;
	}
	else if (n < 0)
	{
		s[(*i)++] = '-';
		n = n * -1;
		num_append(i, s, n);
	}
	else if (n < 10)
		s[(*i)++] = (char)(n + '0');
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;

	s = (char *)malloc(12 * sizeof(char));
	i = 0;
	if (!s)
		return (NULL);
	if (n == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		n = 147483648;
		i = 2;
	}
	num_append(&i, s, n);
	s[i] = '\0';
	return (s);
}
