#include <iostream>
#include <time.h>
#include "Sorting.h"
#include "ArrayController.h"
#include "MultArrSorting.h"
#include <ctime>
#include <chrono>
#include <fstream>
typedef std::chrono::high_resolution_clock Clock;
int main() {
    //srand(time(NULL));

    int** arr;
    arr = new int* [5];
    int choice;
    for (int i = 0; i < 5; i++) {
        arr[i] = new int[5];

    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            //arr[i][j] = 5 - i;
            arr[i][j] = rand() % 5;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    {
        std::cin >> choice;
        int* tmp = new int[5];
        for (int i = 0; i < 5; i++) {      
            tmp[i] = arr[i][choice];
            arr[i][choice] = arr[i][0];
        }
        for (int i = 0; i < 5; i++) {      
            arr[i][0] = tmp[i];
            ;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    MultArrSorting::insertSort(arr, 5);
    //MultArrSorting::quickSort(arr,0,4);
    {
        int* tmp = new int[5];
        for (int i = 0; i < 5; i++) {
            tmp[i] = arr[i][0] ;
            arr[i][0] = arr[i][choice];
        }
        for (int i = 0; i < 5; i++) {
            arr[i][choice] = tmp[i];;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }


  /*  int n = 100000;
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
        
        */

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

    system("pause");

    }
