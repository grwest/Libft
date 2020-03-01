/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:00:43 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 12:41:50 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	get_len(int nbr)
{
	int		len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char		*ft_itoa(int nbr)
{
	char	*res;
	int		len;

	len = get_len(nbr);
	if (!(res = ft_strnew(len)))
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
		res[0] = '-';
	else if (nbr == 0)
		res[0] = '0';
	while (nbr)
	{
		len--;
		if (nbr % 10 < 0)
			res[len] = (nbr % 10) * -1 + '0';
		else
			res[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}

#ifdef TEST

int			main(void)
{
	printf("\nInt: %d\n", 0);
	printf("Ascii: %s\n\n", ft_itoa(0));
	printf("Int: %d\n", 42);
	printf("Ascii: %s\n\n", ft_itoa(42));
	printf("Int: %d\n", -42);
	printf("Ascii: %s\n\n", ft_itoa(-42));
	printf("Int: %d\n", INT_MIN);
	printf("Ascii: %s\n\n", ft_itoa(INT_MIN));
	printf("Int: %d\n", INT_MAX);
	printf("Ascii: %s\n\n", ft_itoa(INT_MAX));
	return (0);
}

#endif
