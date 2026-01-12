NAME = phonebook
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = PhoneBook.cpp PhoneBookHelper.cpp SettersAndGetters.cpp

OBJ = $(SRC:.cpp=.o)

HR = PhoneBook.hpp

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(HR)

%.o: %.cpp
	@$(CXX) $(CFLAGS) -c  $< -o $@

clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all