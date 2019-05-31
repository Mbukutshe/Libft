/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:31:49 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 15:53:06 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Libft.h"
#include <string.h>

void		*ft_memalloc(size_t size)
{
	void	*space;

	space = malloc(size * sizeof(void *));
	if (space == NULL)
		return (NULL);
	ft_memset(space, '0', size);
	return (space);
}
