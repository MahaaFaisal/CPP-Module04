
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -Wfatal-errors
SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp Utils.cpp WrongCat.cpp WrongAnimal.cpp
NAME = animals

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all