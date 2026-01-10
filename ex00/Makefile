NAME		=	easyfind
DIR_SRC		=	./
DIR_BUILD	=	./build
CXX			=	c++
CXXFLAGS	=	-std=c++98 -Wall -Werror -Wextra -g -pedantic
LDINCLUDE	=	-I$(DIR_SRC)

SRCS		=	main.cpp
SRCS_NAME	=	$(basename $(SRCS))
OBJS		=	$(addsuffix .o, $(addprefix $(DIR_BUILD)/, $(SRCS_NAME)))
# ./build/main.o
all: $(NAME)
# all: easyfind
$(NAME): $(OBJS)
	@$(CXX) $(OBJS) $(CXXFLAGS) -o $@
#easyfind: ./build/main.o
#	@c++ ./build/main/.o -std=c++98 -Wall -Werror -Wextra -o exec
#does ./build/main.o exist? if not, build it with the target 

$(DIR_BUILD)/%.o: $(DIR_SRC)/%.cpp
	@mkdir -p $(dir $@) 
	@$(CXX) $(CXXFLAGS) $(LDINCLUDE) -c $< -o $@
# ./build/main.o matches ./build/%.o where % is main. it needs main.cpp
# it does exist!
#make goes back to exec. 
clean:
	@rm -rf $(OBJS)
	@rm -rf $(DIR_BUILD)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re