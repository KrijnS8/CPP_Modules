# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: krijn <krijn@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/09/11 13:06:50 by krijn         #+#    #+#                  #
#    Updated: 2024/09/11 13:07:22 by krijn         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++11

SRC = ./main.cpp ./ClapTrap.cpp
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