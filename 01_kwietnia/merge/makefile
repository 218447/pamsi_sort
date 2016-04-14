FLAGS = -Iinc -pedantic -Wall -std=c++11

__start__: obj MS
	rm -f core*; ./MS

MS: obj/main.o obj/MergeSort.o obj/List.o 
	g++ -o MS obj/main.o obj/MergeSort.o obj/List.o

obj/main.o: src/main.cpp inc/Stoper.h inc/MergeSort.hh
	g++ -c ${FLAGS} -o obj/main.o src/main.cpp

obj/MergeSort.o: src/MergeSort.cpp inc/MergeSort.hh inc/List.h
	g++ -c ${FLAGS} -o obj/MergeSort.o src/MergeSort.cpp

obj/List.o: src/List.cpp inc/List.h inc/IList.h
	g++ -c ${FLAGS} -o obj/List.o src/List.cpp

clean: 
	rm -f core* MS obj/*

remake:
	rm -f core* MS obj/
	make
obj:
	mkdir obj
