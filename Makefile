# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkosolap <dkosolap@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/01 17:05:42 by dkosolap          #+#    #+#              #
#    Updated: 2017/03/01 17:32:09 by dkosolap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

SECOND = push_swap

LIB = -L./libft -lft -L. -lftprintf

FLAGS = -Wall -Wextra -Werror

SRC = push_swap.c

BINS = $(SRC:.c=.o)

all: $(SECOND)

$(SECOND) : $(BINS)
	make -C libft/
	gcc $(LIB) $(FLAGS) -o $(SECOND) $(BINS)
%.o: %.c
	gcc -c -o $@ $< $(FLAGS)
clean:
	rm -f $(BINS)
fclean: clean
	rm -f $(SECOND)
re: fclean all
