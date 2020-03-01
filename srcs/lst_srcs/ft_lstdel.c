/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:33:21 by grwest            #+#    #+#             */
/*   Updated: 2020/03/01 06:45:37 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list1;
	t_list	*list2;

	list1 = *alst;
	while (list1)
	{
		list2 = list1->next;
		del((list1->content), (list1->content_size));
		free(list1);
		list1 = list2;
	}
	*alst = NULL;
}
