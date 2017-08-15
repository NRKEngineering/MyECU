TARGET = MyECU.exe

SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -w -std=c++11

CXX = g++

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@

%.0: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	$(RM) -r *.o $(TARGET)
