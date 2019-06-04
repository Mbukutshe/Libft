/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:45:09 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/04 10:34:13 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (s1[i] && i < n)
	{
		if (s1[i] == '\0')
			return (1);
		else if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else
				return (s2[i] - s1[i]);
		}
		i++;
	}
	if (s2[i] != '\0' && i != n)
		return (-1);
	return (0);
}
