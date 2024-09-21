
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp Utils.cpp Brain.cpp
NAME = animalBrains

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all