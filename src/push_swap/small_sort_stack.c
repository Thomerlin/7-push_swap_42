/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:51:48 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:34:26 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three_cell_2(t_data *data)
{
	int	one;
	int	two;
	int	three;

	one = ((t_cell *)data->stack_a->content)->order;
	two = ((t_cell *)data->stack_a->next->content)->order;
	three = ((t_cell *)data->stack_a->next->next->content)->order;
	if (one > three)
		ft_reverse_rotate_a(data, 1);
	else if (one < three && two > three)
	{
		ft_swap_a(data, 1);
		ft_rotate_a(data, 1);
	}
}

void	ft_three_cell(t_data *data)
{
	int	one;
	int	two;
	int	three;

	one = ((t_cell *)data->stack_a->content)->order;
	two = ((t_cell *)data->stack_a->next->content)->order;
	three = ((t_cell *)data->stack_a->next->next->content)->order;
	if (one > two)
	{
		if (one < three)
			ft_swap_a(data, 1);
		else if (one > three && two < three)
			ft_rotate_a(data, 1);
		else if (one > three && two > three)
		{
			ft_swap_a(data, 1);
			ft_reverse_rotate_a(data, 1);
		}
	}
	else if (one < two)
		ft_three_cell_2(data);
}

void	ft_four_cell(t_data *data)
{
	int		max_order;
	t_list	*tmp;

	max_order = 1;
	tmp = data->stack_a;
	while (tmp)
	{
		if (((t_cell *)tmp->content)->order == 4)
			break ;
		tmp = tmp->next;
		max_order++;
	}
	if (max_order > 1)
	{
		while (((t_cell *)data->stack_a->content)->order != 1)
			ft_rotate_a(data, 1);
	}
	else
	{
		while (((t_cell *)data->stack_a->content)->order != 1)
			ft_reverse_rotate_a(data, 1);
	}
	ft_push_b(data, 1);
	ft_three_cell(data);
	ft_push_a(data, 1);
}

void	ft_five_cell(t_data *data)
{
	int	i;

	i = 2;
	while (i)
	{
		if (((t_cell *)data->stack_a->content)->order < 3)
		{
			ft_push_b(data, 1);
			i--;
		}
		else
			ft_rotate_a(data, 1);
	}
	ft_three_cell(data);
	if (((t_cell *)data->stack_b->content)->order == 1)
		ft_swap_b(data, 1);
	ft_push_a(data, 1);
	ft_push_a(data, 1);
}

void	ft_small_sort_stack(t_data *data)
{
	int	size;

	size = ft_lstsize(data->stack_a);
	if (size == 2)
	{
		if (((t_cell *)data->stack_a->content)->order != 1)
			ft_swap_a(data, 1);
	}
	else if (size == 3)
		ft_three_cell(data);
	else if (size == 4)
		ft_four_cell(data);
	else if (size == 5)
		ft_five_cell(data);
}
