/**************************************************************************************
 *                                                                                    *
 * Randomized quick sort algorithm. It randomly selects the pivot and gives the       *
 * average case time complexity of n*log(n).                                          *
 *                                                                                    *
 **************************************************************************************/
#include <iostream>
#include <cstdlib>  // For random function

 // To return the pivot element
 int partitiion (int*, int, int);
 void quick_sort (int*, int, int);
 void swap (int*, int*);

 int main(int argc, char const *argv[]) {
   int arr[20], n;
   std::cout << "\n\n\t Enter the size of the array : ";
   std::cin >> n;
   for (int i = 0; i < n; i++)
     std::cin >> arr[i];
   std::cout << " \n\n\t Array is : \n\t\t";
   for (int i = 0; i < n; i++)
     std::cout << arr[i] << "  ";
   quick_sort (arr, 0, n-1);
   std::cout << "\n\n\t The array after using randomized quick sort is :" << "\n\t\t";
   for (int i = 0; i < n; i++) {
     std::cout << arr[i] << "  ";
   }
   std::cout << std::endl;
   return 0;
 }

 void quick_sort (int *a, int first, int last) {
   if (first > last)
      return;
   int pivot = partitiion (a, first, last);
   quick_sort (a, first, pivot - 1);
   quick_sort (a, pivot + 1, last);
 }

 // To find the pivot element
 int partitiion (int *a, int first, int last) {
   int pivot = first, randm;
   srand(time(NULL));
   randm = first + rand()%(last-first + 1);
   swap ((a+randm), (a+last));
   for (int i = first; i < last; i++)
     if (*(a+i) < *(a+last)) {
       swap ((a+pivot), (a+i));
       pivot++;
     }
    swap ((a+last), (a+pivot));
    return pivot;
 }

 // To swap two numbers
 void swap (int *a, int *b) {
   *a = *a + *b;
   *b = *a - *b;
   *a = *a - *b;
 }
