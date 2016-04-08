#include "QuickSort.hh"

// Metody klasy QuickSort, sortuj±cej dan± ilo¶æ elementów znajdujacych sie na li¶cie (docelowo na kolejce)

// Konstruktor
QuickSort::quickSort(&List newListOfElements) {
  listOfElements=new List;
  listOfElements=newListOfElements;
}

//Destruktor
QuickSort::~quickSort() {
  delete listOfElements;
  delete lessThanX;
  delete moreOfElements;
}

//Metoda wybieraj±ca piwota
int QuickSort::chooseX(int start, int end) {
  srand (time(NULL));
return rand() % (end-start)  

}

//Metoda zamieniaj±ca miejscami
void QuickSort::change (int start, int end) {
  for(int i=0; i<positionOfX; i++) {
    a=listOfElements->remove(i);
    if (a<X) {
      listOfElements->add(a, positionOfX-1);
    }
  }
  for (int i=positionOfX+1; i<=listOfElements.size(); i++) {
    a=listOfElements->remove(i);
    if (a<X) {
      listOfElements->add(a, positionOfX+1);
    }
  }
}

//Metoda sortuj±ca szybko, wykorzystuj±ca rekursjê
void QuickSort::quickSort(int start, int end) {
  int a = chooseX(start, listOfElements.size());
  quickSort(start, a-1 );
  quickSort(a+1, end);
}

//Metoda zwracaj±ca posortowan± listê
List getList() {
  return listOfElements
    }
			       
  
  
