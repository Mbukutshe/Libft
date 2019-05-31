/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:57:10 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:09:44 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>
#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;
	unsigned char	*s;
	size_t			i;

	i = 1;
	str = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (str == NULL && s == NULL)
		return (NULL);
	while (*s != '\0' && i <= len)
	{
		*str = *s;
		str++;
		s++;
		i++;
	}
	*str = '\0';
	return (str);
}
