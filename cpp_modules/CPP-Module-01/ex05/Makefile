NAME = Harl
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp  Harl.cpp

OBJ = $(SRC:.cpp=.o)

HRS = Harl.hpp

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