all:	intruso.o main.o
	g++ -o main intruso.o main.o
intruso.o: intruso.cpp intruso.hpp
	g++ -c intruso.cpp
main.o: main.cpp intruso.hpp
	g++ -c main.cpp		
clean:
	rm -rf *.o
vai:
	./main	