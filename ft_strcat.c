/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:34:46 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:16:41 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int		pos;
	char	*dst;
	char	*src;

	pos = 0;
	dst = s1;
	src = (char *)s2;
	pos = ft_strlen(dst);
	while (*src)
	{
		dst[pos] = *src;
		pos++;
		src++;
	}
	dst[pos] = '\0';
	return (dst);
}
