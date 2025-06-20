# ===== Colors for pretty output =====
_GREY=	\033[1;30m
_RED=	\033[1;31m
_GREEN=	\033[1;32m
_YELLOW=\033[1;33m
_BLUE=	\033[1;34m
_PURPLE=\033[1;35m
_CYAN=	\033[1;36m
_WHITE=	\033[1;37m
_NC=	\033[0m

# ===== Executable name =====
NAME = pizza_factory

# ===== Directories =====
SRCDIR = src
INCDIR = include
OBJDIR = obj

# ===== Source files =====
SRCFILES = main.cpp \
		   $(shell find $(SRCDIR) -type f \( -name "*.cpp" -o -name "*.cc" \))

# ===== Include directories =====
INCDIRS = $(shell find $(INCDIR) -type d)
INCLUDES = $(foreach dir,$(INCDIRS),-I$(dir))

# ===== Object files =====
OBJ = $(patsubst %.cpp,$(OBJDIR)/%.o,$(filter %.cpp,$(SRCFILES))) \
	  $(patsubst %.cc,$(OBJDIR)/%.o,$(filter %.cc,$(SRCFILES)))

# ===== Compiler and flags =====
CXX      = clang++
CXXFLAGS = -std=c++20 -Wall -Wextra -Werror -fsanitize=address

# ===== Default target =====
.PHONY: all
all: pretty $(NAME)

# ===== Linking final executable =====
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
	@printf "$(_GREEN)[✔] Linked $@\n$(_NC)"

# ===== Compiling source to object files =====
$(OBJDIR)/%.o: %.cpp Makefile
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCLUDES)
	@printf "$(_BLUE)[●] Compiled $< -> $@\n$(_NC)"

$(OBJDIR)/%.o: %.cc Makefile
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCLUDES)
	@printf "$(_BLUE)[●] Compiled $< -> $@\n$(_NC)"

# ===== Clean object files only =====
.PHONY: clean
clean:
	@rm -rf $(OBJDIR)
	@printf "$(_YELLOW)[✗] Removed object files\n$(_NC)"

# ===== Clean everything =====
.PHONY: fclean
fclean: clean
	@rm -f $(NAME)
	@printf "$(_YELLOW)[✗] Removed executable $(NAME)\n$(_NC)"

# ===== Rebuild everything =====
.PHONY: re
re: fclean all

# ===== Beautify output =====
.PHONY: pretty
pretty:
	@printf "$(_CYAN)=============================\n$(_NC)"
	@printf "$(_CYAN) Building $(NAME) Project\n$(_NC)"
	@printf "$(_CYAN)=============================\n$(_NC)"
