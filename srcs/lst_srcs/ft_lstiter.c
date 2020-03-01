/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:37:48 by grwest            #+#    #+#             */
/*   Updated: 2020/02/29 00:38:30 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
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
