CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98


SRCS = phone.cpp contacts.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = phonebook

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(NAME) $(OBJS)
re : fclean all
.PHONY : all clean fclean re