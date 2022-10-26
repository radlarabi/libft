/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:10:24 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/26 12:54:14 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	if (!lst)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

// void *f(void *s)
// {
//     return (s);
// }
// #include <stdio.h>
// int main()
// {
//     t_list *a;
//     t_list *b;
//     t_list *c;

//     a = ft_lstnew("a");
//     b = ft_lstnew("b");
//     ft_lstadd_back(&a,b);
//     c = ft_lstmap(a,f,free);
//     puts(c->next->next->content);
// }