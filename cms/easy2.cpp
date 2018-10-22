#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n;			// Inizializzazione della variabile che conterra' il numero di coppie di elementi
    cin >> n;
	int a, b, maxEvenSum = -1;
    
    for(int i = 0; i < n; i++){	// Inserimento dei valori nel vettore
        cin >> a >> b;
		if (((a + b) % 2 == 0) && ((a + b) > maxEvenSum)){
			maxEvenSum = a + b;
		}
    }
    
	cout << maxEvenNum;

}