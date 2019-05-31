/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:40:02 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:27:09 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>

char		*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;
	int		occur;

	i = 0;
	occur = 0;
	s = (char *)str;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			occur = i;
		i++;
	}
	i = 0;
	while (*s != '\0')
	{
		if (occur == i)
			return (s);
		s++;
		i++;
	}
	return (NULL);
}
