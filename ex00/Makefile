CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98


SRCS = megaphone.cpp

OBJS = $(SRCS: .cpp=.o)

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(NAME)
re :
	fclean all
.PHONY : all clean fclean re