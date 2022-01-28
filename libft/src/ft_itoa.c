/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:20:55 by tyago-ri          #+#    #+#             */
/*   Updated: 2022/01/28 11:20:55 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_lenstr(long num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	size;

	nb = n;
	size = ft_lenstr(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
		nb *= -1;
	while (size--)
	{
		str[size] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
