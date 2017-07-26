TARGET ?= MyECU.exe

SRCS ?= ECU_Main.cpp ECU_MapSensor.cpp

OBJS ?= ECU_Main.o ECU_MapSensor.o

CXXFLAGS ?= -Wall -I

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@


ECU_Main.o: ECU_Main.cpp ECU_MapSensor.h
	$(CXX) ECU_Main.cpp -c -g

ECU_MapSensor.o: ECU_MapSensor.cpp ECU_MapSensor.h
	$(CXX) ECU_MapSensor.cpp -c -g

.PHONY: clean
clean:
	$(RM) -r *.o $(TARGET)
