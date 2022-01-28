/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:23:49 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:23:50 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = ft_strlen(s);
	while (s[i] != ch)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return (&s[i]);
}
