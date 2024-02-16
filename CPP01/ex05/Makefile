# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kschelvi <kschelvi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/16 12:26:34 by kschelvi      #+#    #+#                  #
#    Updated: 2024/02/16 15:49:35 by kschelvi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = harl

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++11

SRC = ./main.cpp ./Harl.cpp
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