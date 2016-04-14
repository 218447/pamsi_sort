#include <iostream>
#include "MergeSort"
#include <cstdlib>
#include <time>
#include "Stoper.h"

using namespace std;

int main(int argc, char *argv) {
  if (argc==1) {
    cout << "Brak argumentów wywołania, podaj rozmiar listy" << endl;
    exit(1);
  } else {
    Stoper stoper;
    List* lista = new List;
    srand(time(NULL));
    for (int i=0; i<atoi(argv[1]); i++) {
      lista->add(rand()%100, i);
    }
   
    MergeSort* MS = new MergeSort(lista);
    stoper.start();    
    MS.mergeSort();
    stoper.stop();stoper.stop();    
    cout << "Dla " << atoi(argv[1]) << " elementów czas sortowania wynosi: " << stoper.getTime() << endl;
  }
}
