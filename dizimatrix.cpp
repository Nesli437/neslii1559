#include<iostream>
using namespace std;

int main (){

int s[5][2] = { {1,2},{3,4},{5,6},{7,8},{9,10} };// 5 sat�rl�k 2 s�tunluk de�er girildi
	cout << "\n\n\t\t Matrixxx" << endl;//ekrana matrix de�eri yazd�rma
	cout << "\tnesliii**********nesliiii" << endl;//ekrana yazd�r
	for (int i = 0; i < 5; i++)//forda 5 defa d�nder
	{
		for (int j = 0; j < 2; j++)//2 kere de�er d�nd�r
		{
			cout << "\t[" << i << "][" << j << "] :";//ekranda i ve j de�erlerini yazd�r
			cout << s[i][j] << endl;//dizi karaktrlerini yazd�r i ve j nin
			
		}
	}
return 0;
}
