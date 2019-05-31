/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 08:55:50 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 17:17:30 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Libft.h"

void		ft_putstr_fd(char const *s, int fd)
{
	char	*str;

	str = (char *)s;
	if (!str)
		return ;
	write(fd, str, ft_strlen(str));
}
