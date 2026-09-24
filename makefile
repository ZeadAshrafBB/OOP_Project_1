#Compiler
CXX = g++

#Compiler Flags
CXXFLAGS = -Wall

#Targer/Output
TARGET = main

#Source Files
SRCS = *.cpp filters_implementation/*.cpp

#Compile and Run
all : $(TARGET) run

$(TARGET) : $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)
