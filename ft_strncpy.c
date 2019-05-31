/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 16:58:57 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:15:33 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*str;
	char	*dest;
	size_t	i;

	i = 0;
	str = (char *)src;
	dest = (char *)dst;
	if (src == NULL)
		return (NULL);
	while (++i < len)
	{
		*dest = *str;
		dest++;
		str++;
	}
	return (dest);
}
