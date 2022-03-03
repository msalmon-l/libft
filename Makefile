# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 20:46:03 by msalmon-          #+#    #+#              #
#    Updated: 2022/02/02 18:28:12 by msalmon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o $@

#OBLIGATORY PART

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isascii.c ft_isalnum.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all: 		${NAME}

#BONUS PART

SRCS_B	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJS_B	= ${SRCS_B:.c=.o}

bonus:		
			@make SRCS="$(SRCS) $(SRCS_B)"
#OTHER 

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	clean fclean re bonus all
