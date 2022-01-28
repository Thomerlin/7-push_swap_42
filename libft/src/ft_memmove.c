/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:22:07 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:22:07 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned char		*str;

	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (dst > str)
	{
		while (n--)
			dst[n] = str[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
