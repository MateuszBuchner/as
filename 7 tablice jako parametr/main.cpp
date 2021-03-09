#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int tablicaPierwsza[5] = {-1,-2,-3,-4,-5};
	int tablicaDruga[5] = {1,2,3,4,5};
	int tablica_wynik_scalony[10];
	
	int x, y, h;
	
	for (x=h=y=0;x < 5 &&y<5;h++)
	{
		if (tablicaPierwsza[x] < tablicaDruga[y])
		{
			tablica_wynik_scalony[h] = tablicaPierwsza[x];
			x++;
		}
		else
		{
			tablica_wynik_scalony[h] = tablicaDruga[y];
			y++;
		}
	}
	
	if (x < 5)
	for(; x <5; x++,h++)
	tablica_wynik_scalony[h] = tablicaPierwsza[x];
	else
	for(; y <5; y++,h++)
	tablica_wynik_scalony[h] = tablicaDruga[y];
	
	cout << "sortowanie: ";
	for (x=0; x<10; x++)
	cout << tablica_wynik_scalony[x] <<" ";
	
	return 0;
}





