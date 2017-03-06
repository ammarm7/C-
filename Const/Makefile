final:	main.o Sally.o 
	g++ -o final main.o Sally.o 

main.o: main.cc Sally.h
	g++ -c main.cc

Sally.o: Sally.cc Sally.h
	g++ -c Sally.cc

clean:
	rm -f *.o final
