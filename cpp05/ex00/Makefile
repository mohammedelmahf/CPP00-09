NAME = Mommy_when_I_grow_up_I_want_to_be_a_bureaucrat!

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Bureaucrat.cpp
OBJS = $(SRCS:.cpp=.o)
SHDRS = Bureaucrat.hpp
all: $(NAME)

$(NAME): $(OBJS) $(SHDRS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all