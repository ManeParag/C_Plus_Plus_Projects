CXX = g++

CXXFLAGS = -Iinc -Wall -g

TARGET = StudentApp

SRCS  = src/main.cpp src/studententry.cpp src/StudentRemove.cpp

all:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)
#all:
#	g++ src/main.cpp src/studententry.cpp -Iinc -o StudentApp

clean:
ifeq ($(OS),Windows_NT)
	del /F /Q StudentApp.exe
else
	rm -f StudentApp
endif