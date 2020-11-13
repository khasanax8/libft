# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awylis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/13 09:47:45 by awylis            #+#    #+#              #
#    Updated: 2020/11/13 10:04:44 by awylis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
FUNC = ft_memset \
	   ft_bzero \
	   ft_memcpy \
	   ft_memccpy \
	   ft_memmove \
	   ft_memchr \
	   ft_memcmp \
	   ft_strlen \
	   ft_strlcpy \
	   ft_strlcat \
	   ft_strchr \
	   ft_strrchr \
	   ft_strnstr \
	   ft_strncmp \
	   ft_atoi \
	   ft_isalpha \
	   ft_isdigit \
	   ft_isalnum \
	   ft_isascii \
	   ft_isprint \
	   ft_toupper \
	   ft_tolower \
	   ft_calloc \
	   ft_strdup \
	   ft_substr \
	   ft_strjoin \
	   ft_strtrim \
	   ft_split \
	   ft_itoa \
	   ft_strmapi \
	   ft_putchar_fd \
	   ft_putstr_fd \
	   ft_putendl_fd \
	   ft_putnbr_fd \

OBJ = $(patsubst %, %.o, $(FUNC))
.PHONY: all

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo *CREATED*
	ranlib libft.a

%.o: %.c
	@gcc $(FLAG) -o $@ -c $<
	@echo *READY* $@ [$(FLAG)]

.PHONY: clean
clean:
	@rm -f $(OBJ)
	@echo *DELETED*

.PHONY: fclean
fclean: clean
	@rm -f $(NAME)
	@echo *$(NAME) DELETED*

.PHONY: re
re: fclean all
