/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:29:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 17:14:05 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Libft.h"

void		ft_putstr(char const *s)
{
	char	*str;

	str = (char *)s;
	if (str == NULL)
		return ;
	write(1, str, ft_strlen(str));
}
