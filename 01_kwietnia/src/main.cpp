#include <iostream>
#include "QuickSort.hh"
#include "Stoper.h"
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc==1) {
    std::cout << "Brak argumentów wywołania, proszę podać rozmiar listy" << std::endl;
    exit(1);
  } else {
    Stoper stoper;
    int rozmiar=atoi(argv[1]);
    srand(time(NULL));
    List *lista=new List;
    for (int i=1; i<=rozmiar; i++){
      lista->add(rand() % 100, i);
    }
    QuickSort *QS = new QuickSort (lista);
    std::cout << "Rozmiar listy do posortowania: " << rozmiar << std::endl;
    stoper.start();
    QS->quickSort(1, QS->getSize()-1);
    stoper.stop();
    std::cout<<"Czas wyszukiwania wynosi: " << stoper.getTime() <<std::endl;
  }
}
