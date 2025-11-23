CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 

# ==== FILES =====================================================
SRCS    = phone.cpp contacts.cpp
HEADERS = phonebook.hpp contact.hpp

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
