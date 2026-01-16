NAME = UnnecessaryViolence
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp  HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)



all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(HR)

%.o: %.cpp
	@$(CXX) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all