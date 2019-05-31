/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:20:18 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:09:34 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	char	*str;
	char	*src;
	size_t	i;

	i = -1;
	str = (char *)d;
	src = (char *)s;
	if (!src)
		return (NULL);
	while (++i < n)
	{
		*str = *src;
		if (*src == (unsigned char)c)
		{
			return (str);
		}
		str++;
		src++;
	}
	return (NULL);
}
