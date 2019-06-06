/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:55:07 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 17:11:18 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_rows(char *s, char c)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	str = s;
	while (str[++i] != '\0')
	{
		len++;
		while (str[i] == c)
		{
			i++;
		}
		while (str[i] != c)
		{
			i++;
		}
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
	return (size);
}

char		**ft_allocate(char **arr, int columns, int rows)
{
	char	**arry;
	int		i;

	i = 0;
	arry = arr;
	while (i <= rows)
	{
		arry[i] = (char *)malloc((columns + 1) * sizeof(char));
		i++;
	}
	return (arr);
}

char		**ft_array(char **s, char *str, char c, int rows)
{
	char	**array;
	char	*temp;
	int		i;
	int		j;

	array = s;
	temp = str;
	i = 0;
	while (temp[i] != '\0')
	{
		j = 0;
		while (temp[i] == c)
			i++;
		while ((temp[i] != c) && (temp[i] != '\0'))
		{
			*(*(array + rows) + j) = temp[i];
			j++;
			i++;
		}
		if (temp[i] != '\0')
		{
			*(*(array + rows) + j) = '\0';
			rows++;
		}
	}
	array[rows] = 0;
	return (s);
}

char		**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**array;
	int		rows;

	str = (char *)s;
	if (str == NULL)
		return (NULL);
	rows = ft_rows(str, c);
	array = (char **)malloc((rows + 1)  * sizeof(char *));
	if (array == NULL)
		return (NULL);
	array = ft_allocate(array, ft_columns(str, c), rows);
	array = ft_array(array, str, c, 0);
	return (array);
}
