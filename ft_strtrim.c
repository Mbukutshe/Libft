/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:19:50 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 12:43:44 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_start(const char *str, int i)
{
	char	*ptr;

	ptr = (char *)str;
	 while ((ptr[i] == ' ' || ptr[i] == '\n' || ptr[i] == '\t') && ( ptr[i] != '\0'))
		i++;
	return (i);
}

int			ft_end(const char *str, int i)
{
	char	*ptr;

	ptr = (char *)str;
	while (ptr[i] == ' ' || ptr[i] == '\n' || ptr[i] == '\t')
		i--;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	char	*temp;
	int		len;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	len = (int)ft_strlen(s);
	i = ft_start(s, 0);
	j = ft_end(s, len - 1);
	str = (char *)malloc((len - (len - j + 1) + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	temp = str;
	while (s[i] && i <= j)
	{
		*temp = s[i];
		temp++;
		i++;
	}
	*temp = '\0';
	return (str);
}
