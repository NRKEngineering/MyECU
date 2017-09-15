
TARGET = NRK1000.exe

CXX := g++
LINKER := g++
CXXFLAGS := -std=c++11 -Wall -Wextra

INC := -I include/
LIBS :=
SRC := $(wildcard src/*.cpp) 
OBJ := $(patsubst %.cpp,%.o,$(SRC))

$(TARGET): $(OBJ)
	$(LINKER) $(CXXFLAGS) $^ $(LIBS) -o $@

clean:
	rm -f src/*.o src/*.d $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

