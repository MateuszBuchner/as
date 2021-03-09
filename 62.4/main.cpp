#include <iostream>
#include <fstream>
using namespace std;

const int value = 1000;

void zapisy() {
  cout << "62.4:" << endl;
  ifstream in("liczby2.txt");
  
  int tablica[value];
  
  int zapis_osemkowy = 0;
  int zapis_dziesietny = 0;
  int liczba;
  
    for (int x=0; x<value;x++) in >> tablica[x];
  	for (int x=0; x<value;x++) {
  	
	  	
    liczba = tablica[x];
    while (liczba) {
    if (liczba % 10==6) zapis_osemkowy++;
      
      liczba = liczba /10;
    }
    
    liczba = tablica[x];
    while (liczba) {
    if (liczba % 8==6) zapis_dziesietny++;
    
      liczba = liczba /8;
    }
  }
  cout << "zapis osemkowy:"<< zapis_osemkowy << "    " <<  "zapis dziesietny: " <<  zapis_dziesietny << endl;
}

int main() {
  zapisy();
}
