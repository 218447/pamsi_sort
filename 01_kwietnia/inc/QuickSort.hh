#ifndef QUICKSORT_HH
#define QUICKSORT_HH

#include "List.h"
#include <cstdlib>

class QuickSort: public IQuickSort {
private:
  List *listOfElements;

public:
  QuickSort();
  ~QuickSort();
  void quickSort (int start, int end);
  void change (int start, int end);
  int chooseX (int start, int end);
  List getList();
};

#endif
