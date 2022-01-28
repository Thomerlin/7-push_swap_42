/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:20:23 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:20:23 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	i;
	size_t	res_count;

	i = 0;
	res_count = count * size;
	mem = (char *)malloc(res_count);
	if (!(mem))
		return (NULL);
	while (res_count--)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
