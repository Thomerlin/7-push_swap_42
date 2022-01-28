/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:23:04 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:23:04 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i] != ch)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return (&s[i]);
}
