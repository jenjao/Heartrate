main: hw3.o main.o
	g++ -o main main.o hw3.o

hw3.o: hw3.cpp hw3.hpp
	g++ -Wall -g -c hw3.cpp

main.o: main.cpp hw3.hpp
	g++ -Wall -g -c main.cpp

clean:
	rm *.o
	rm main
