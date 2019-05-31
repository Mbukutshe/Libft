/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 12:41:36 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:19:20 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>

size_t		ft_strlcat(char *restrict dst, char *restrict src, size_t dstsize)
{
	char	*dest;
	char	*sr;
	size_t	len;

	dest = dst;
	sr = src;
	len = ft_strlen(dst);
	while (*sr != '\0' && len < dstsize)
	{
		dest[len] = *sr;
		sr++;
		len++;
	}
	dest[len] = '\0';
	return (len);
}
