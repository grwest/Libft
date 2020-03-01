/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:23:03 by grwest            #+#    #+#             */
/*   Updated: 2020/02/29 00:33:07 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
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
