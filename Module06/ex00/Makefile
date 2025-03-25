# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kschelvi <kschelvi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2025/02/13 14:08:58 by kschelvi      #+#    #+#                  #
#    Updated: 2025/03/25 16:15:11 by kschelvi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert

CXX = c++
CXXFLAGS = -g -Wshadow -std=c++17 #-Werror -Wall -Wextra

SRC = ./main.cpp ./ScalarConverter.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean:
	$(RM) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

re: fclean all

.PHONY: all fclean clean re