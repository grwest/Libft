/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:38:38 by grwest            #+#    #+#             */
/*   Updated: 2020/02/29 00:39:34 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*iter;

	if (!lst || !(iter = ft_lstnew(NULL, 0)))
		return (NULL);
	iter = f(lst);
	head = iter;
	while (lst->next)
	{
		lst = lst->next;
		iter->next = f(lst);
		iter = iter->next;
	}
	return (head);
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
