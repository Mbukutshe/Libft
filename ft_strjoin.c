/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:51:23 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 16:42:46 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*temp;
	char	*str;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	len = ft_strlen(str1) + ft_strlen(str2);
	str = (char *)malloc((len + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	temp = str;
	temp = ft_strcat(str, str1);
	temp = ft_strcat(temp, str2);
	return (temp);
}
