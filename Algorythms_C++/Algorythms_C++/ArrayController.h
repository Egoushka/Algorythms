#pragma once

class ArrayController
{
public:
    static void showElems(int* arr, int n);
    static void setElementsValue(int* arr, int from, int to, int n);
    static void shiftElementsForInsertSort(int* arr, int from, int to, int n);
    static void shiftElementsForInsertSort(int* arr[], int from, int to, int n);
};
