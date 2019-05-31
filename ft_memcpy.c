/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:31:56 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:09:26 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*str;
	char	*sr;
	size_t	i;

	i = -1;
	sr = (char *)src;
	str = (char *)dst;
	while (++i < n)
	{
		*str = *sr;
		str++;
		sr++;
	}
	return (str);
}
