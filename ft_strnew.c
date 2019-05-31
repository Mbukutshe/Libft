/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:50:13 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:58:12 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(size * sizeof(char *));
	if (!str)
		return (NULL);
	ft_memset(str, '0', size);
	return (str);
}
