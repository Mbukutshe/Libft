/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 08:59:58 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 17:18:20 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Libft.h"

void		ft_putendl_fd(char const *s, int fd)
{
	char	*str;

	str = (char *)s;
	if (!str)
		return ;
	ft_putstr_fd(str, fd);
	ft_putchar('\n');
}
