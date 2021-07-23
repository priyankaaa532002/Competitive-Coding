#include <stdio.h>

void interchange(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high) {

  int pivot = array[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {

      i++;

      interchange(&array[i], &array[j]);
    }
  }

  interchange(&array[i + 1], &array[high]);

  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {

    int temp = partition(array, low, high);

    quickSort(array, low, temp - 1);

    quickSort(array, temp + 1, high);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n\n");
}

int main() {
  int data[] = {6, 4, 2, 1, 3, 5, 7};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array(Given):\n");
  printArray(data, n);

  quickSort(data, 0, n - 1);
  
  printf("Sorted array: \n");
  printArray(data, n);
}