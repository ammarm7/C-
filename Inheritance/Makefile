OBJ = main.o Daughter.o Mother.o

inheritance: $(OBJ)
	g++ -o inheritance $(OBJ)

main.o: main.cc
	g++ -c main.cc

Daughter.o: Daughter.cc Daughter.h
	g++ -c Daughter.cc

Mother.o: Mother.cc Mother.h
	g++ -c Mother.cc

clean:
	rm -f $(OBJ) inheritance
