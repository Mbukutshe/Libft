/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:37:40 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 17:12:40 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <stdlib.h>

int			ft_size(int n)
{
	int c;

	c = 1;
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c + 1);
}

char		*ft_change_order(char *s)
{
	char	*str;
	char	*sr;
	char	*temp;
	int		len;

	sr = (char *)s;
	len = ft_strlen(sr);
	str = (char *)malloc((len + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	temp = str;
	while (len--)
	{
		*temp = sr[len];
		temp++;
	}
	*temp = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	char	*temp;
	int		sign;
	int		mod;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = n * -1;
	}
	str = (char *)malloc((ft_size(n) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	temp = str;
	while (n > 0)
	{
		mod = n % 10;
		if (mod > 9)
			*temp = (mod - 10) + '0';
		else
			*temp = mod + '0';
		temp++;
		n = n / 10;
	}
	if (sign < 0)
	{
		*temp = '-';
		temp++;
	}
	*temp = '\0';
	return (ft_change_order(str));
}
