/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:27:28 by grwest            #+#    #+#             */
/*   Updated: 2020/02/27 18:00:50 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_atoi(const char *str)
{
	int		result;
	int		negative;

	negative = 1;
	result = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9' && result >= 0)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * negative);
}

#ifdef TEST

int		main(void)
{
	printf("\n      ascii: 0");
	printf("\n    ft_atoi: %d\n", ft_atoi("0"));
	printf("actual atoi: %d\n\n", atoi("0"));
	printf("\n      ascii: 5");
	printf("\n    ft_atoi: %d\n", ft_atoi("5"));
	printf("actual atoi: %d\n\n", atoi("5"));
	printf("\n      ascii: -5");
	printf("\n    ft_atoi: %d\n", ft_atoi("-5"));
	printf("actual atoi: %d\n\n", atoi("-5"));
	printf("\n      ascii: 2147483647");
	printf("\n    ft_atoi: %d\n", ft_atoi("2147483647"));
	printf("actual atoi: %d\n\n", atoi("2147483647"));
	printf("\n      ascii: -2147483648");
	printf("\n    ft_atoi: %d\n", ft_atoi("-2147483648"));
	printf("actual atoi: %d\n\n", atoi("-2147483648"));
	printf("\n      ascii: 9999999999");
	printf("\n    ft_atoi: %d\n", ft_atoi("9999999999"));
	printf("actual atoi: %d\n\n", atoi("9999999999"));
	return (0);
}

#endif
