/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 16:21:25 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/04 16:51:04 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	unsigned char	*str;
	unsigned char	*dest;

	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	while (*str)
	{
		*dest = *str;
		dest++;
		str++;
	}
	*dest = '\0';
	return (dst);
}
