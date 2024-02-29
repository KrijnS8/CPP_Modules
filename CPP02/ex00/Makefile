# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kschelvi <kschelvi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/29 15:28:25 by kschelvi      #+#    #+#                  #
#    Updated: 2024/02/29 15:28:55 by kschelvi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++11

SRC = ./main.cpp ./Fixed.cpp
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