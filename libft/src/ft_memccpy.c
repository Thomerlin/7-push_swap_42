/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:21:49 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:21:49 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	unsigned char		*str;

	i = 0;
	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	if ((dest == 0) && (src == 0))
		return (0);
	while (i < n)
	{
		dst[i] = str[i];
		if (str[i] == (unsigned char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
