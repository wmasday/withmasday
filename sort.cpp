#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int jumlah, nilai, array_tmp, nilaiMin, nilaiMax, nilaiAll;
float nilaiMean;
bool looping = true;
char options;
int counter = 0;

void shorting(){
    cout << "- Array Data Shorting On C++ -\n";
    cout << "[?] Jumlah Bilangan : ";
    cin >> jumlah;
    cout << endl;
    
    int data[jumlah];
    for(int i = 0; i < jumlah; i++){
       cout << "[?] Nilai Bilangan " << (i+1) << " : ";
       cin >> data[i];
    }
    
    cout << endl;
    
    cout << "[>] Data Input \t: ";
    for(int i = 0; i < jumlah; i++){
       printf ("%d ",data[i]);
    }
    
    cout << endl;
    for (int i=0; i<jumlah; i++){
        for(nilai = i + 1; nilai < jumlah; nilai++){
            if(data[i] > data[nilai]){
              array_tmp = data[i];
              data[i] = data[nilai];
              data[nilai] = array_tmp;
            }
        }
    }
    
    cout << "[>] Descending \t: ";
    for(int i = 0; i < jumlah; i++){
        printf ("%d ",data[i]);
        nilaiAll += data[i];
    }
    
    nilaiMin = data[0];
    nilaiMax = data[jumlah-1];
    nilaiMean = nilaiAll / jumlah;
    
    cout << endl;
    for(int i=0; i<jumlah; i++){
        for(nilai = i + 1; nilai < jumlah; nilai++){
            if(data[i] < data[nilai]){
              array_tmp = data[i];
              data[i] = data[nilai];
              data[nilai] = array_tmp;
            }
         }
      }
    
    cout << "[>] Ascending \t: ";
    for(int i = 0; i < jumlah; i++){
        printf ("%d ",data[i]);
    }
    
    
    cout << endl << "[>] Nilai Min \t: " << nilaiMin;
    cout << endl << "[>] Nilai Max \t: " << nilaiMax;
    cout << endl << "[>] Nilai Mean \t: " << nilaiMean;
    cout << endl;
}

int main(){
    while(looping == true){
       shorting();
       cout << endl << endl;
       cout << "[?] Shorting Kembali? (y/n) : ";
       cin >> options;
       if (options == 'y' || options == 'Y') {
       		system ("clear");
       	    looping = true;
	   } else {
	   		cout << "[!] Good bye :'( ";
	   		looping = false;
	   }
    }
}
