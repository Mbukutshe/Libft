/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:15:20 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 16:38:35 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>
#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;
	char	*temp;

	if (s == NULL)
		return (NULL);
	str = (char *)s + start;
	ptr = (char *)malloc((len + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	while (*str && start < len)
	{
		*temp = *str;
		temp++;
		str++;
		start++;
	}
	*temp = '\0';
	return (ptr);
}
