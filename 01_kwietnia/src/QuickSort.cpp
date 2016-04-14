#include "QuickSort.hh"
#include <iostream>
// Metody klasy QuickSort, sortuj±cej dan± ilo¶æ elementów znajdujacych sie na li¶cie (docelowo na kolejce)

// Konstruktor
QuickSort::QuickSort(List* newListOfElements) {
  listOfElements = new List;
  for (int i=1; i<=newListOfElements->size(); i++) {    
    listOfElements->add(newListOfElements->get(i).element, i);
  }
}


//Metoda zamieniaj±ca miejscami
void QuickSort::quickSort(int p, int r) {
  int i = p, j = r, ind = (p+r)/2; 
  int pivot = listOfElements->get(ind).element;
  
  do {
    while (i<ind) {
      if (listOfElements->get(i).element > pivot) {
	listOfElements->add(listOfElements->get(i).element, r++);
	ind--;
	listOfElements->remove(i);
      } else i++;
    }
    while(j>ind) {
      if(listOfElements->get(j).element < pivot) {
	listOfElements->add(listOfElements->get(j).element, ind);
	ind++;
	listOfElements->remove(j+1);
      } else j--;
    }
    if ((i==ind) && (j==ind)) {
	int exit = 1;
      } 
  } while (!exit);
    if (r-p >= 1) {
      if (j>p) quickSort (p, j-1);
      if (i<r) quickSort (i+1, r);
    }
  }
      

//Metoda zwracaj±ca posortowan± listê
void QuickSort::getList() {
  listOfElements->wypisz();
}

int QuickSort::getSize() {
 return listOfElements->size();
}
