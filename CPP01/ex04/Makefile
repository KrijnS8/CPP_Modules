# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kschelvi <kschelvi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/13 14:11:22 by kschelvi      #+#    #+#                  #
#    Updated: 2024/02/13 15:11:46 by kschelvi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = sed

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++11

SRC = ./main.cpp
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