#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int swapped = 0;
    for (int j = 0; j < size - i - 1; ++j) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        swapped = 1;
      }
    }
    // If there is no swapping in the last swap, then the array is already sorted.
    if (swapped == 0)
      break;
  }
}
