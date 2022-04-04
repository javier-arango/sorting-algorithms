#include <iostream>
using namespace std;


// Function to swap position of elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// Function to partition the array on the basis of pivot element
int partition(int array[], int low, int high) {
  // Select the pivot element
  int pivot = array[low];
  int up=low, down=high;
  
  while(up<down){
      for (int j = up; j < high; j++) {
        if(array[up]>pivot)
            break;
        up++;
      }
      for (int j = high; j > low; j--) {
        if(array[down]<pivot)
            break;
        down--;
      }
      if(up<down)
        swap(&array[up], &array[down]);
  }
  swap(&array[low], &array[down]);
  return down;
}


void quickSort(int array[], int low, int high) {
  if (low < high) 
  {
    int pivot = partition(array, low, high);
    quickSort(array, low, pivot - 1);
    quickSort(array, pivot + 1, high);
  }
}
