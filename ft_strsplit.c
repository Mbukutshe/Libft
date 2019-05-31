/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:55:07 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 17:11:24 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <stdlib.h>

int			ft_rows(char *s, char c)
{
	int		i;
	int		len;
	char	*str;

	len = 1;
	i = 0;
	str = s;
	while (str[i] != '\0')
	{
		if ((str[i] == c) && !(i == 0 || i == (int)ft_strlen(s)))
		{
			if (str[i - 1] != c)
				len++;
		}
		i++;
	}
	return (len);
}

int			ft_columns(char *s, char c)
{
	int		i;
	int		len;
	int		size;
	char	*str;

	len = 0;
	i = -1;
	size = 0;
	str = s;
	while (str[++i] != '\0')
	{
		if (str[i] != c)
			len++;
		else if (len > size)
		{
			size = len;
			len = 0;
		}
	}
	return (size + 1);
}

char		**ft_allocate(char **arr, int columns, int rows)
{
	char	**arry;
	int		i;

	i = -1;
	arry = arr;
	while (++i < rows)
		arry[i] = (char *)malloc(columns * sizeof(char *));
	return (arry);
}

char		**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**array;
	char	**temp;
	int		rows;
	int		i;
	int		j;

	if (!s || !c)
		return (NULL);
	str = (char *)s;
	rows = ft_rows(str, c);
	array = (char **)malloc((rows + 1) * sizeof(char **));
	array = ft_allocate(array, ft_columns(str, c), rows);
	temp = array;
	i = 0;
	rows = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == c)
			i++;
		while ((str[i] != c) && (str[i] != '\0'))
		{
			*(*(temp + rows) + j) = str[i];
			j++;
			i++;
		}
		*(*(temp + rows) + j) = '\0';
		rows++;
	}
	*(*(temp + rows) + j) = '\0';
	return (array);
}
