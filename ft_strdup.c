/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 16:05:15 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:13:28 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	s = (char *)malloc(ft_strlen(s1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	return (s);
}
