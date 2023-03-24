#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
  
// Driver program to test above functions
int main()
{
    srand(time(NULL));   // Initialization, should only be called once.
    int n = 500000;
    int arr[n];
    int i;
    for(i = 0; i < n; i++){
        arr[i] = rand();
    }

    clock_t begin = clock(); 
    bubbleSort(arr, n);
    clock_t end = clock();
    float time_spent = (float)(end - begin) / CLOCKS_PER_SEC;
    printf("%f\n", time_spent);
    return 0;
}