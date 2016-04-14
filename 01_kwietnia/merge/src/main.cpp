#include <iostream>
#include "MergeSort.hh"
#include "Stoper.h"
#include <cstdlib>

int main(int argc, char* argv[]) {
  if (argc==1) {
    std::cout << "Brak argumentów wywołania, proszę podać rozmiar listy" << std::endl;
    exit(1);
  } else {
    Stoper stoper;
    int rozmiar = atoi (argv[1]);
    srand(time(NULL));
    List *lista = new List;
    for (int i=1; i<=rozmiar; i++){
      lista->add(rand() % 100, i);
    }
    lista->wypisz();

    MergeSort* MS = new MergeSort (lista);
    stoper.start();
    std::cout << MS->getSize() << std::endl;
    MS->mergeSort(1, MS->getSize());
    stoper.stop();
    std::cout<<"Dla: " << MS->getSize() <<"elementow, czas wyszukiwania wynosi: " << stoper.getTime() <<std::endl;
    MS->getList();
  }
}
