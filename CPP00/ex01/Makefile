# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: krijn <krijn@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/09 19:23:18 by krijn         #+#    #+#                  #
#    Updated: 2024/02/12 14:47:17 by kschelvi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++11

SRC = ./main.cpp ./Contact.cpp ./PhoneBook.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $^ -o $@

fclean:
	$(RM) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

re: fclean all

.PHONY: all fclean clean re