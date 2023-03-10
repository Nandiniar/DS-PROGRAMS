#include <stdio.h>
 int find_max(int arr[], int n) {
   int max_element = arr[0];
   for(int i = 1; i<n; i++) {
  	if(arr[i] > max_element)
     	max_element = arr[i];
   }
   return max_element;
}
void countingSort(int arr[], int n, int pos)
{
  int result[n + 1];
  int count[10] = {0};
   for (int i = 0; i < n; i++)
    count[(arr[i] / pos) % 10]++;
   for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];
  for (int i = n - 1; i >= 0; i--) {
    result[count[(arr[i] / pos) % 10] - 1] = arr[i];
    count[(arr[i] / pos) % 10]--;
  }
  for (int i = 0; i < n; i++)
    arr[i] = result[i];
}

void radixsort(int arr[], int n) {
  int max_element = find_max(arr, n);
    for (int pos = 1; max_element / pos > 0; pos *= 10)
    countingSort(arr, n, pos);
}
int main() {
  printf("Nandini Arora \n");
  printf("2100320120116\n");
  int arr[] = {312, 42, 635, 11, 8, 783, 954, 777};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("An array before applying the radix sort: \n");
  for (int i = 0; i < n; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
  radixsort(arr, n);
  printf("An array after applying the radix sort: \n");
  for (int i = 0; i < n; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

