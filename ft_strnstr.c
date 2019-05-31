/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:51:21 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:33:56 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*s;
	size_t	i;
	int		j;
	int		c;

	i = -1;
	c = 0;
	s = (char *)haystack;
	str = (char *)needle;
	if (*str == '\0')
		return (s);
	while (s[++i] != '\0' && i < len)
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
