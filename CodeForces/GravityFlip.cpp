
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

int main(){
    int size; cin >> size;
    int arr[size];
    for (size_t i = 0; i < size; i++){
        cin >> arr[i]; 
    }
    quickSort( arr, 0, size -1 );
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;
}