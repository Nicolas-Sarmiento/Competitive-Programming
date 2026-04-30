#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t; // número de pruebas por caso
    for ( int k = 0; k < t; k++ ) {
        
        int n; 
        cin >> n; //tamaño del arreglo.
        
        vector<int> a (n); //vector de tamaño n.
        
        for ( int i = 0; i < n; i++ ) {
            cin >> a[i]; // leer cada valor del arreglo a.
        }
        
        int repetido;
        if ( a[0] == a[1] ) {
            repetido = a[0]; // Si el primer valor es igual al segundo
                             // entonces cualquiera es el valor repetido.
        }else {
            repetido = a[2]; // Si el primer valor es diferente al segundo,
                             // entonces el tercer valor tiene que ser repetido.
        }
        
        for ( int i = 0; i < n; i++ ) {
            if ( a[i] != repetido ) { // Si el valor ai es diferente al repetido, es el dato que buscamos
                cout << (i + 1) << '\n'; // Imprimimos la posición + 1 para cumplir con el problema.
                break;
            }
        }
        
    }
    
    return 0;
}
