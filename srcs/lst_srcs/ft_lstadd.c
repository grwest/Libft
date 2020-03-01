/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:36:18 by grwest            #+#    #+#             */
/*   Updated: 2020/02/29 00:37:07 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*elem;

	elem = new;
	elem->next = *alst;
	*alst = elem;
}

#ifdef TEST

int		main(void)
{
	t_list	*list;

	list = ft_lstnew("test 1", 7);
	list->next = ft_lstnew("test 2", 7);
	list->next->next = ft_lstnew("test 3", 7);
	printf("%s\n", (char *)list);
	return (0);
}

#endif
