/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:02:40 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/27 22:09:16 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_data *data, int flag)
{
	t_list	*tmp;

	if (!data->stack_b)
		return ;
	tmp = data->stack_b;
	data->stack_b = data->stack_b->next;
	ft_lstadd_front(&data->stack_a, tmp);
	if (flag)
		ft_putstr_fd("pa\n", 1);
}

void	ft_push_b(t_data *data, int flag)
{
	t_list	*tmp;

	if (!data->stack_a)
		return ;
	tmp = data->stack_a;
	data->stack_a = data->stack_a->next;
	tmp->next = 0;
	ft_lstadd_front(&data->stack_b, tmp);
	if (flag)
		ft_putstr_fd("pb\n", 1);
}
