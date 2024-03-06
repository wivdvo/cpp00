NAME = phonebook

SRCS =	Contact.cpp \
		Phonebook.cpp \
		main.cpp

HEADERS = Contact.hpp \
			Phonebook.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -fr

all: $(NAME)

$(NAME):	$(OBJS) $(HEADERS)
				$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:		
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re