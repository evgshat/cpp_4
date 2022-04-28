NAME	=	abstract_class
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS	=	${SRCS:.cpp=.o}
RM		=	rm -rf
HEADERS	=	Animal.hpp Cat.hpp Dog.hpp Brain.hpp

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} $^ -o $@

%.o: %.cpp Makefile ${HEADERS}
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
