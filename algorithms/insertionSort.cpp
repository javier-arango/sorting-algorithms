#include <iostream>
using namespace std;


void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = i-1;
    
    // Compare key with each element in sorted till smaller value is found
    while (key < array[j] && j >= 0) {
      array[j+1] = array[j];
      j--;
    }
    array[j+1] = key;
  }
}
