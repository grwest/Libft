/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:28:15 by grwest            #+#    #+#             */
/*   Updated: 2020/02/29 00:29:21 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	list = *alst;
	del((list->content), (list->content_size));
	free(*alst);
	*alst = NULL;
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
