/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:21:16 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:21:16 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_elem;

	while (lst && *lst)
	{
		next_elem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_elem;
	}
}
