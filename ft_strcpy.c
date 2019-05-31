/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 16:21:25 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:14:37 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>

char		*ft_strcpy(char *dst, const char *src)
{
	char	*str;
	char	*dest;

	dest = dst;
	str = (char *)src;
	if (str == NULL)
		return (NULL);
	while (*str)
	{
		*dest = *str;
		dest++;
		str++;
	}
	return (dst);
}
