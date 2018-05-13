vpath %.cpp ./src

.PHONY: clean all

OS		= $(shell uname -s)
BIN		= ./bin/$(OS)
SRC		= ./src

CXXFLAGS	+= -Iinclude
CXXFLAGS	+= -I../portable/include

OBJS		:= $(patsubst $(SRC)/%.cpp,$(BIN)/%.o,$(wildcard $(SRC)/*.cpp))

all : $(BIN)/pinout.out

clean :
	$(RM) $(BIN)/*.o $(BIN)/pinout.out

$(BIN)/%.o : %.cpp
	-mkdir -p $(BIN)
	$(CXX) -c $(CXXFLAGS) $^ -o $@

$(BIN)/pinout.out : $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@
