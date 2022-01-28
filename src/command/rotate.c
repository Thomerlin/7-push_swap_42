/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:20:09 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:36:10 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_data *data, int flag)
{
	t_list	*tmp;

	if (!(data->stack_a && data->stack_a->next))
		return ;
	tmp = data->stack_a;
	data->stack_a = data->stack_a->next;
	tmp->next = 0;
	ft_lstadd_back(&data->stack_a, tmp);
	if (flag)
		ft_putstr_fd("ra\n", 1);
}

void	ft_rotate_b(t_data *data, int flag)
{
	t_list	*tmp;

	if (!(data->stack_b && data->stack_b->next))
		return ;
	tmp = data->stack_b;
	data->stack_b = data->stack_b->next;
	tmp->next = 0;
	ft_lstadd_back(&data->stack_b, tmp);
	if (flag)
		ft_putstr_fd("rb\n", 1);
}

void	ft_rotate_ab(t_data *data, int flag)
{
	ft_rotate_a(data, 0);
	ft_rotate_b(data, 0);
	if (flag)
		ft_putstr_fd("rr\n", 1);
}
