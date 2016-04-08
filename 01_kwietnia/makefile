FLAGS = -g -Iinc -pedantic -Wall -std=c++11

QS: obj/main.o obj/QuickSort.o obj/List.o
	g++ obj/main.o obj/QuickSort.o obj/List.o -o QS

obj/main.o: src/main.cpp inc/List.h
	g++ -c $(FLAGS) src/main.cpp -o obj/QuickSort.o

obj/QuickSort.o: src/QuickSort.cpp inc/QuickSort.hh inc/IQuickSort.hh
	g++ -c $(FLAGS) -o obj/QuickSort.o src/QuickSort.cpp

obj/List.o: src/List.cpp inc/List.h inc/IList.h
	g++ -c $(FLAGS) -o obj/List.o src/List.cpp

clean: 
	rm -f obj/*.o
