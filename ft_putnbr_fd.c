/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:06:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 17:19:03 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return ;
	ft_putstr_fd(str, fd);
}
