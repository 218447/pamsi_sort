#include "MergeSort.hh"

MergeSort::mergeSort (List *newList) {
  list = new List;
  list = newList;
}

MergeSort~mergeSort() {}

void MergeSort::mergeSort (int p, int q, int r) {
  int n1 = q-p+1;
  int n2 = r-1;
  List* L = new List;
  List* R = new List;
  
  for (int i=1; i<n1; i++) {
    L->add(list->get(p+i+1).element, i);
  }
  for (int j=1; j<n2; i++) {
    R->add(list->get(q+j).element, j)
      }
  L->add(1, n1+1);
  R->add(1, n2+1);
  int i=1;
  int j=1;
  for (kint k=p; k<r; k++) {
    if (L->get(i).element<=R->get(j).element) {
      list->add(L->get(i).element, k);
      list->remove(k+1);
      i++;
    } else {
      list->add(R->get(j).element, k);
      list->remove(k+1);
      j++;
    }
  }
}

int MergeSort::getSize () {
  return lista->size();
}

void MergeSort::getList () {
  lista->wypisz();
}
