NAME = phonebook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

SRC = main.cpp PhoneBook.cpp Contact.cpp

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all