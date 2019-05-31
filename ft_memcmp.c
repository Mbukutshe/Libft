/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:08:30 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:11:02 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <stdlib.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = -1;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (str1 == NULL || str2 == NULL)
		return (0);
	while (++i < n)
	{
		if (*str1 > *str2)
			return (1);
		else if (*str1 < *str2)
			return (-1);
		str1++;
		str2++;
	}
	return (0);
}
