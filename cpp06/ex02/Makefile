NAME = Serialization

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp 
OBJS = $(SRCS:.cpp=.o)
SHDRS = Base.hpp A.hpp B.hpp C.hpp
all: $(NAME)

$(NAME): $(OBJS) $(SHDRS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all