NAME = harlFilter

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCDIR	= src
SRCS	= $(wildcard $(SRCDIR)/*.cpp)
OBJDIR	= obj
OBJS	= $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

run: $(NAME)
	./$(NAME) "WARNING"
	./$(NAME) "I am not sure how tired I am today..."

$(NAME) : $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $^ $(CXXFLAGS) -c -o $@

clean:
	$(RM) *.o
	$(RM) $(NAME)
