//
// Created by guibagold on 27/08/2019.
//

#include <iostream>
#include "mercado.hpp"

Lista *arraySequentialSearch(Lista *item, int searchValue{
    if(item == NULL){
        return NULL;
    }
    if(searchValue == item->chave){
        return item;
    }
    else {
            arraySequentialSearch(item->prox, searchValue);
    }
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