CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 

SRCS    = PhoneBook.cpp Contacts.cpp
HEADERS = PhoneBook.hpp Contact.hpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(HEADERS)

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
