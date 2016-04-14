#ifndef IQUICKSORT_HH
#define IQUICKSORT_HH
class IQuickSort {
public:
  virtual void quickSort(int start, int end)=0;
  virtual void getList()=0;
  virtual int getSize()=0;
};
#endif
