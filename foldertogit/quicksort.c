#include <stdio.h>

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  
  int pivot = array[high];
   int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] < pivot) {
        
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

// main function
int main() {
 int a[100],N;
    printf("ENTER SIZE\n");scanf("%d",&N);
    printf("ENTER ELEMENTS\n");
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);
  // perform quicksort on data
  quickSort(a, 0, N- 1);
  
  printf("Sorted array in ascending order: \n");
    for(int i=0;i<N;i++)
    {
      printf("%d,",a[i]);
    }
}