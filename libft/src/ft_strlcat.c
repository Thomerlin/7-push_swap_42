/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:23:23 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:23:23 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (i < n)
	{
		j = ft_strlcpy(dest + i, src, n - i);
		return (j + i);
	}
	return (j + n);
}
