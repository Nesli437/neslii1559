#include <iostream>//giri� ��k�s k�t�phanesi
#include<locale.h>//t�rk�e karakter k�t�phanesi
using namespace std;

int main()
{
	setlocale(LC_ALL,"turkish");
     int n, sayi, kalan, ters = 0;

     cout << "pozitif de�erde say� giriniz: ";
     cin >>sayi;

     n =sayi;

     do
     {
         kalan = sayi % 10;//404%10= kalan 4
         ters = (ters * 10) + kalan;// 40 kald� 40 � 10 ile * ve 400+ kalan� ekle yani 4
         sayi = sayi / 10;// say�y� 404 / 10 a b�l 40
     } while (sayi != 0);//say� 0 a �it olmas�n

     cout << " say�n�n tersi " << ters << endl;

     if (n == ters)//ters say�ya e�it ise yani tersine
         cout << "girilen say� palindromdur.";
     else
         cout << " girilen say� palindrom de�il.";

    return 0;
}
