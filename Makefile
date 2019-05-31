# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/22 14:20:02 by kmbukuts          #+#    #+#              #
#    Updated: 2019/05/22 15:01:06 by kmbukuts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE = Libft.h
SRC 	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c
		  ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strnpy.c ft_strcat.c
		  ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c
		  ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c
		  ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
FLAGS	= -Wall -Werror -Wextra
CC		= gcc -c
all		:
re		:
fclean	:
clean	:	
