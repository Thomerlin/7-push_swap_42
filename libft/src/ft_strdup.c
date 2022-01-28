/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:23:15 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:23:15 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	count;

	count = ft_strlen(s1);
	tmp = (char *)malloc(count + 1);
	if (!tmp)
		return (NULL);
	count = 0;
	while (s1[count])
	{
		tmp[count] = s1[count];
		count++;
	}
	tmp[count] = '\0';
	return (tmp);
}
