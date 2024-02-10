# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: krijn <krijn@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/09 19:23:18 by krijn         #+#    #+#                  #
#    Updated: 2024/02/09 19:23:57 by krijn         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -std=c++98

SRC = ./main.cpp ./Contact.cpp ./PhoneBook.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

fclean:
	$(RM) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

re: fclean all

.PHONY: all fclean clean re