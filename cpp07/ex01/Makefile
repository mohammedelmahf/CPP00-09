NAME = Iter

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)
SHDRS = iter.hpp
all: $(NAME)

$(NAME): $(OBJS) $(SHDRS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all