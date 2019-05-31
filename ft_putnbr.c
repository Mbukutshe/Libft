/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:37:40 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 17:15:21 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Libft.h"

void		ft_putnbr(int n)
{
	char	*str;

	str = ft_itoa(n);
	if (str == NULL)
		return ;
	ft_putstr(str);
}
