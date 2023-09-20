all: programa													
brazorobot0.o:	brazorobot0.cpp	brazo.h
	g++ -c brazorobot0.cpp
main.o:	main.cpp	brazo.h
	g++ -c main.cpp
programa:	brazorobot0.o	main.o
	g++ -o programa main.o brazorobot0.o
clean:
	rm -f *.o programa
test: all
	./programa
