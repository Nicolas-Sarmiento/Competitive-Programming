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
    int t, m, sum = 0; cin >> t >> m;
    int tv[t];
    for (size_t i = 0; i < t; i++){
        cin >> tv[i]; 
    }
    quickSort(tv, 0, t-1);
    for (size_t i = 0; i < m; i++){
        if (tv[i] >=0){
            break;
        }
        sum -= tv[i];
    }
    cout << sum << '\n';
    return 0;
}