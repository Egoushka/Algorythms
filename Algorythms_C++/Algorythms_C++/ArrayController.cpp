#include <iostream>
#include "ArrayController.h"

void ArrayController::showElems(int* arr, int n)
{
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}

void ArrayController::setElementsValue(int* arr,int from, int to, int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % to - from;
}

void ArrayController::shiftElementsForInsertSort(int* arr, int from, int to, int n)
{
    int* tmp2 = arr;
    for (int i = from, tmp; i > to; --i) {
        tmp = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = tmp;
    }
}
