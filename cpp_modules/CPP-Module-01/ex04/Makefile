NAME = Sed_is_for_losers
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp  Getters.cpp Setters.cpp

OBJ = $(SRC:.cpp=.o)

HRS = main.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(HRS)

%.o: %.cpp
	@$(CXX) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all