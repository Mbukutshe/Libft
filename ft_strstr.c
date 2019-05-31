/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:50:56 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:36:27 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>
#include <stdlib.h>

char		*ft_strstr(const char *haystack, const char *needle)
{
	char	*s;
	char	*str;
	int		i;
	int		j;
	int		c;

	i = -1;
	c = 0;
	s = (char *)haystack;
	str = (char *)needle;
	if (*str == '\0')
		return (s);
	while (s[++i] != '\0')
	{
		j = -1;
		while (str[++j] != '\0')
			if (str[j] == s[i + j])
				c++;
		if (c == (int)ft_strlen(str))
			return (s + i);
		else
			c = 0;
	}
	return (NULL);
}
