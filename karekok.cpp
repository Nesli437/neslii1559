#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;
 
int main()
{ 
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
	double sayi;
	cout<<"Say�y� Gir : ";
	cin>>sayi;
	cout<<"Girilen say�n�n karek�k� : "<<sqrt(sayi);
}
