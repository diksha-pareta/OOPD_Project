CXX = g++
CXXFLAGS = -std=c++11 -Wall -O2

all: main

main: main.o AccessPoint.o User.o Packet.o FrequencyChannel.o WiFiSystem.o
	$(CXX) $(CXXFLAGS) -o main main.o AccessPoint.o User.o Packet.o FrequencyChannel.o WiFiSystem.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

AccessPoint.o: AccessPoint.cpp AccessPoint.h
	$(CXX) $(CXXFLAGS) -c AccessPoint.cpp

User.o: User.cpp User.h
	$(CXX) $(CXXFLAGS) -c User.cpp

Packet.o: Packet.cpp Packet.h
	$(CXX) $(CXXFLAGS) -c Packet.cpp

FrequencyChannel.o: FrequencyChannel.cpp FrequencyChannel.h
	$(CXX) $(CXXFLAGS) -c FrequencyChannel.cpp

WiFiSystem.o: WiFiSystem.cpp WiFiSystem.h
	$(CXX) $(CXXFLAGS) -c WiFiSystem.cpp

clean:
	rm -f *.o main
