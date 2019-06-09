/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:55:07 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/09 14:20:43 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_rows(char *s, char c)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = -1;
	str = s;
	while (str[++i] != '\0')
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i] != '\0' && i != 0 && str[i - 1] == c && str[i] != c)
			len++;
	}
	return (len);
}

char		*ft_allocate(int col, char *str, int pos)
{
	char	*arr;
	int		i;

	i = -1;
	arr = (char *)malloc(col + 1 * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (++i < col)
	{
		arr[i] = str[pos++];
	}
	arr[i] = '\0';
	return (arr);
}

char		**ft_array(char **s, char const *str, char c)
{
	int		i;
	int		j;
	int		row;

	i = 0;
	row = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] != '\0' && str[i] != c)
			i++;
		if (i > j)
			s[row++] = ft_allocate(i - j, (char *)str, j);
	}
	s[row] = 0;
	return (s);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		ro;

	if (s == NULL || !c)
		return (NULL);
	ro = ft_rows((char *)s, (const char)c);
	array = (char **)malloc((ro + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	array = ft_array(array, (char const *)s, c);
	return (array);
}
