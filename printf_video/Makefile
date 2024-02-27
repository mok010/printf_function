# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emok <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 20:25:53 by emok              #+#    #+#              #
#    Updated: 2023/11/17 20:25:55 by emok             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_element_iux.c ft_element_csp.c ft_printf.c ft_write_error.c
OBJS = $(SRCS:%.c=%.o)
H_DIR = ./libft
H_NAME = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(H_DIR)
	cp $(H_DIR)/$(H_NAME) $(NAME) 
	ar rc $@ $^

.c.o	:
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(H_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(H_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
