# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kschelvi <kschelvi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/12 16:36:32 by kschelvi      #+#    #+#                  #
#    Updated: 2024/02/12 16:37:06 by kschelvi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98

SRC = ./main.cpp ./newZombie.cpp ./randomChump.cpp ./Zombie.cpp
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