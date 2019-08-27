//
// Created by guibagold on 27/08/2019.
//

#include <iostream>

int arraySequentialSearch(int *arr, int searchValue, int size){
    arr[size] = searchValue;
    for (int i = 0; sentinel != arr[i]; i++);
    if (i < size) return(i);
    else return (-1);
}

int arrayBinSearch(int *arr, int searchValue, int size){
    if(arr[size/2] == searchValue){
        return size/2;
    } else if(arr[size/2] < searchValue){
        for(int i = size/2; searchValue == arr[i]; i==);
        return i;
    } else {
        for(int i = size/2; searchValue == arr[i]; i++);
        return i;
    }
}