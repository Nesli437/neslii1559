#include<iostream>// bu �rnekde karakter dizilerde kar��la�t�rma i�lemi yapt�raca��z
#include<conio.h>//karakter dizi k�t�phanesi
#include<string.h>//string k�t�phanesi
#include<locale.h>//t�rk�e karakter k�t�phanesii
using namespace std;
int main(){
	setlocale(LC_ALL,"turkish");
	char sifre[10];
	int sonuc,hak=3;
	while(hak-->0){//�ifre ye 3 hak tan�
		cout<<"�ifre girin:";//�ifre al.
		gets(sifre);
		sonuc=strcmp(sifre,"neslii123");//strcmp komudu karakterleri kar��la�t�rmay� sa�lar.
		if(sonuc==0){
			puts("�ifre do�ru");//�ifre do�rukar��la�t�r�ld�.//puts komudu cout gibii�lem yapar tek fark kontrol i�lemi i�in kullan�l�r.
			break;
		}
		else{
			puts("�ifre yanl��");//�ifre yanl�� kar��la�t�r�ld�.
		}
		
	}
	
	getch();//karakterleri teker teker okuyum bir seferde derlemeyi sa�lar.
	
	return 0;
	
	
}
