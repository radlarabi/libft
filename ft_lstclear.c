/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:11:10 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/19 20:19:11 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    int     i;

    i = 0;
    while (lst[i]->next)
    {
        ft_lstdelone(lst[i],&del);
        i++;
    }
    lst[i] = NULL;
}