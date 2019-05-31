/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:47:31 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 16:33:32 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*str;
	unsigned int	i;

	if (!(s || f))
		return ;
	i = -1;
	str = s;
	while (*str)
	{
		f(++i, str++);
	}
}
