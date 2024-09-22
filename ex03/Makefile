
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp LinkedList.cpp ICharacter.cpp Character.cpp Cure.cpp AMateria.cpp MateriaSource.cpp Ice.cpp
NAME = interfaces

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all