/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:24:00 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:24:00 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num2);
	return (num1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	len = ft_min(ft_strlen(s) - (size_t)start, len);
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = str[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
