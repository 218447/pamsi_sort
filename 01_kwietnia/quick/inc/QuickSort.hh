#ifndef QUICKSORT_HH
#define QUICKSORT_HH

#include "List.h"
#include <cstdlib>
#include <ctime>
#include "IQuickSort.hh"

class QuickSort: public IQuickSort {
private:
  List *listOfElements;

public:
  QuickSort();
  QuickSort(List* lista);
  ~QuickSort();
  void quickSort (int start, int end);
  void getList();
  int getSize();
};

#endif
