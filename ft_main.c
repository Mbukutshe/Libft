/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:06:40 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/05/31 14:58:02 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "Test.h"
#include "ft_test.c"

int		main(void)
{
	ft_test_memset();
	ft_test_bzero();
	ft_test_memcpy();
	ft_test_memccpy();
	ft_test_memmove();
	ft_test_memchr();
	ft_test_memcmp();
	ft_test_strlen();
	ft_test_strdup();
	ft_test_strcpy();
	ft_test_strncpy();
	ft_test_strcat();
	ft_test_strncat();
	ft_test_strlcat();
	ft_test_strchr();
	ft_test_strrchr();
	ft_test_strstr();
	ft_test_strnstr();
	ft_test_strcmp();
	ft_test_strncmp();
	ft_test_atoi();
	ft_test_isalpha();
	ft_test_isdigit();
	ft_test_isalnum();
	ft_test_isascii();
	ft_test_isprint();
	ft_test_toupper();
	ft_test_tolower();
	ft_test_memalloc();
	ft_test_memdel();
	ft_test_strnew();
	ft_test_strdel();
	ft_test_strclr();
	ft_test_striter();
	ft_test_striteri();
	ft_test_strmap();
	ft_test_strmapi();
	ft_test_strequ();
	ft_test_strnequ();
	ft_test_strsub();
	ft_test_strjoin();
	ft_test_strtrim();
	ft_test_strsplit();
	ft_test_itoa();
	ft_test_putchar();
	ft_test_putstr();
	ft_test_putendl();
	ft_test_putnbr();
	ft_test_putchar_fd();
	ft_test_putstr_fd();
	ft_test_putendl_fd();
	ft_test_putnbr_fd();
	return (0);
}
