#include "MergeSort.hh"
#include <iostream>

MergeSort::MergeSort (List *newList) {
  lista = new List;
  lista = newList;
}

MergeSort::~MergeSort() {}

void MergeSort::merge(int p, int q, int r) {
  List *listaPom = new List;
  int h,i,j,k;
  h=p;
  i=1;
  j=q+1;
  // Scalanie dwóch list
  while((h<=q)&&(j<=r)) { 
    std::cout << h<< "   " << j <<std::endl;
    if(lista->get(h).element <= lista->get(j).element) {
      listaPom->add(lista->get(h).element, i);
      h++;
      std::cout << "tu jestem" << std::endl;

    } else {
      listaPom->add(lista->get(j).element, i);
      j++;
      std::cout << "tu jestem" << std::endl;

    }
    i++;
  }

  if(h>q) {
    for(k=j; k <= r; k++) {
      listaPom->add(lista->get(k).element, i);
	  i++;
    }
  } else {
    for (k=h; k<=q; k++) {
      listaPom->add(lista->get(k).element, i);
      i++;
    }
  }
  //Wpisanie do listy

    for (int i = 0; i <= r-p; i++) {
      lista->remove(1);
    } 
      for (k=0; k<=r-p; k++) {
	lista->add(listaPom->get(k).element, k+p);
      }
}
    
void MergeSort::mergeSort (int p, int r) {
  if (p < r) {
    int q = (p+r)/2;
    mergeSort(p, q);
    mergeSort(q+1, r);
    merge(p, q, r);
    std::cout << "tu jestem" << std::endl;
  }
}

int MergeSort::getSize() {
  return lista->size();
}

void MergeSort::getList() {
  lista->wypisz();
}
