#ifndef MERGESORT_HH
#define MERGESORT_HH

#include "List.h"

class MergeSort {
private:
  List* lista;
public:
  MergeSort (List* newList);
  ~MergeSort();
  void merge (int p, int q, int r);
  void mergeSort (int p, int r);
  int getSize();
  void getList();
};
#endif
