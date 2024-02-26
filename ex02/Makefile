NAME = phonebook

SRCS =	tests.cpp \
		Account.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -fr

all: $(NAME)

$(NAME):	$(OBJS)
				$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:		
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re