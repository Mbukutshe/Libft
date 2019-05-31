/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:30:10 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 16:35:20 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <stdlib.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;
	char			*str;
	char			*dst;

	i = -1;
	if (s == NULL)
		return (NULL);
	ptr = (char *)s;
	dst = (char *)malloc((ft_strlen(ptr) + 1) * sizeof(char *));
	if (dst == NULL)
		return (NULL);
	str = dst;
	while (*ptr)
	{
		*str = f(++i, *ptr);
		str++;
		ptr++;
	}
	*str = '\0';
	return (dst);
}
