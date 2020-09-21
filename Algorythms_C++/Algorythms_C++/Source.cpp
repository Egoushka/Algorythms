#include <iostream>
#include <time.h>
#include "Sorting.h"
#include "ArrayController.h"
#include <ctime>
#include <chrono>
#include <fstream>
typedef std::chrono::high_resolution_clock Clock;
int main() {
    //srand(time(NULL));

    int n = 100000;
    int* arr = new int[n];
    int from = -1000, to = 1000;
    auto t1 = Clock::now(),t2 = Clock::now();
    std::ofstream fout;
    fout.open("abracadabra.txt");
    if (!fout.is_open()) {
        std::cout << "Error";
    }
    else {
        
        for (int i = 1000; i <= n; i += 1000)
        {
            ArrayController::setElementsValue(arr, from, to, i);
            t1 = Clock::now();
            Sorting::mergeSort(arr,0, i);
            t2 = Clock::now();
            fout << i << '\t' << std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count() << '\n';
        }
        fout.close();
        
        

         /*{
             ArrayController::setElementsValue(arr, from, to, n);
             std::clock_t start;
             auto t1 = Clock::now();
             Sorting::quickSort(arr,0,n);
             auto t2 = Clock::now();
             std::cout << "Time is: " << std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count()
                 << " milliseconds" << std::endl;

         }
         {
             for (int i = 0; i < n; ++i) {
                 arr[i] = n - i;
             }
             std::clock_t start;
             auto t1 = Clock::now();
             Sorting::quickSort(arr,0,n);
             auto t2 = Clock::now();
             std::cout << "Time is: " << std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count()
                 << " milliseconds" << std::endl;
         }
         {
             ArrayController::setElementsValue(arr, -1, 2, n);
             std::clock_t start;

             auto t1 = Clock::now();
             Sorting::quickSort(arr,0,n);
             auto t2 = Clock::now();
             std::cout << "Time is: " << std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count()
                 << " milliseconds" << std::endl;
         }
         {
             ArrayController::setElementsValue(arr, 0, 1, n);
             std::clock_t start;
             auto t1 = Clock::now();
             Sorting::quickSort(arr,0,n);
             auto t2 = Clock::now();
             std::cout << "Time is: " << std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count()
                 << " milliseconds" << std::endl;

         }*/

         
    }
    system("pause");
}