/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:22:02 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:22:03 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned char		*str;

	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	if ((dest == src) || (n == 0))
		return (dest);
	while (n--)
		*dst++ = *str++;
	return (dest);
}
