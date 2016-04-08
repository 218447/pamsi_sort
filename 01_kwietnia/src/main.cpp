#include <iostream>
#include "QuickSort.hh"

using namespace std;


int main() {
  srand(time(NULL));
  List *lista=new List;
  for (int i=0; i<10; i++){
    lista->add(rand(), i);
  }
  QuickSort *QS=new QuickSort(lista);
  QS->quickSort(0, lista.size());
  delete lista;
  lista=QS->getList();
}
