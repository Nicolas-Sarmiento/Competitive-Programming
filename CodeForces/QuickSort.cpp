#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition( int arr[], int low, int high ){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++){
        if ( arr[j] <= pivot){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    
    return (i+1);
}

void quickSort( int arr[], int low, int high ){
    if ( low < high ){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

void printArr( int arr[], int size){
    for (size_t i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main(){
    int array[] = {3,2,9,1,0,3,4,5};
    int size = sizeof(array) /sizeof(array[0]);
    printArr(array, size);
    quickSort(array, 0, size -1 );
    printArr( array, size );
    return 0;
}