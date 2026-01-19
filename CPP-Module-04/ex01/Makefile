NAME = ocf
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp animal.cpp dog.cpp cat.cpp WrongAnimal.cpp WrongCat.cpp brain.cpp 

OBJ = $(SRC:.cpp=.o)

HR = animal.hpp dog.hpp cat.hpp WrongAnimal.hpp WrongCat.hpp brain.hpp

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