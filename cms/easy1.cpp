#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n;			// Inizializzazione della variabile che conterra' il numero di elementi
    cin >> n;
    int arr[n];		// Inizializzazione del vettore con n elementi
    
    for(int i = 0; i < n; i++){	// Inserimento dei valori nel vettore
        cin >> arr[i];
    }
    
    int maxNum = arr[0];		// inizializzazione del massimo al primo numero dell'array
    
    for(int i = 1; i < n; i++){	// Per ogni numero, se e' maggiore del massimo, il massimo viene rimpiazzato
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
	
    cout << maxNum;

}