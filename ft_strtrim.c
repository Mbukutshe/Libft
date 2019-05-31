/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:19:50 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 17:06:17 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <stdlib.h>

int			ft_condition(char *str, int i, int len)
{
	char	*ptr;

	ptr = (char *)str;
	if (ptr[i] == ' ' || ptr[i] == '\n' || ptr[i] == '\t')
		if (i == 0 || i == len - 1)
			return (0);
	return (1);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	char	*ptr;
	char	*temp;
	int		i;
	int		len;

	i = -1;
	if (s == NULL)
		return (NULL);
	ptr = (char *)s;
	len = (int)ft_strlen(ptr) + 1;
	str = (char *)malloc(len * sizeof(char *));
	if (str == NULL)
		return (NULL);
	temp = str;
	while (ptr[++i] != '\0')
	{
		if (ft_condition(ptr, i, len))
		{
			*temp = ptr[i];
			temp++;
		}
	}
	*temp = '\0';
	return (str);
}
