CPPFLAGS = 
CPPLIBS = 
main: Conjunto.o main.o
	g++ main main.o Conjunto.o $(CPPLIGS)

Conjunto.o: Conjunto.cpp Conjunto.h
	g++ $(CPPFLAGS) -c -o Conjunto.o Conjunto.cpp

main.o: Conjunto.h
	g++ $(CPPFLAGS) -c -o main.o main.cpp

clean:
	rm *.o main