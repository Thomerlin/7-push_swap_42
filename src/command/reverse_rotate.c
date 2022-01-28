/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:29:46 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/27 22:39:13 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_data *data, int flag)
{
	t_cell	*prev;
	t_cell	*curr;
	t_list	*tmp;

	if (!(data->stack_a && data->stack_a->next))
		return ;
	tmp = data->stack_a;
	prev = (t_cell *)(ft_lstlast(tmp)->content);
	while (tmp)
	{
		curr = tmp->content;
		tmp->content = prev;
		prev = curr;
		tmp = tmp->next;
	}
	if (flag)
		ft_putstr_fd("rra\n", 1);
}

void	ft_reverse_rotate_b(t_data *data, int flag)
{
	t_cell	*curr;
	t_cell	*prev;
	t_list	*tmp;

	if (!(data->stack_b && data->stack_b->next))
		return ;
	tmp = data->stack_b;
	prev = (t_cell *)(ft_lstlast(tmp)->content);
	while (tmp)
	{
		curr = tmp->content;
		tmp->content = prev;
		prev = curr;
		tmp = tmp->next;
	}
	if (flag)
		ft_putstr_fd("rrb\n", 1);
}

void	ft_reverse_rotate_ab(t_data *data, int flag)
{
	ft_reverse_rotate_a(data, 0);
	ft_reverse_rotate_b(data, 0);
	if (flag)
		ft_putstr_fd("rrr\n", 1);
}
