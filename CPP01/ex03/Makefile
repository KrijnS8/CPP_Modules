# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kschelvi <kschelvi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/12 17:56:23 by kschelvi      #+#    #+#                  #
#    Updated: 2024/02/12 17:56:58 by kschelvi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_violence

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98

SRC = ./main.cpp ./Weapon.cpp ./HumanA.cpp ./HumanB.cpp
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