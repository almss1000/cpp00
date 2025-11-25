CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 

# ==== FILES =====================================================
SRCS    = PhoneBook.cpp Contacts.cpp
HEADERS = PhoneBook.hpp Contact.hpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(HEADERS)

NAME = phonebook

# ==== RULES ======================================================
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compile .cpp into .o (depend on headers)
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

# ==== CLEAN RULES =================================================
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
