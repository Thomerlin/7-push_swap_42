/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:23:27 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:23:27 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == 0)
		return (0);
	if (dest != src)
	{
		while (src[i] != '\0' && n > 1)
		{
			dest[i] = src[i];
			i++;
			n--;
		}
		if (n > 0)
			dest[i] = '\0';
	}
	return (ft_strlen(src));
}
