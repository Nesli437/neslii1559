#include<iostream>//sorumuz ilk h�z�belli fakat k�tlesive son h�z� belliolmayan bir cismin itme momentumunu bulunuz..
#include<locale.h>//itme momentumu delta pyani momentum de�i�imine e�it olup formul olarak I=m.v formuluile hesaplan�r.
using namespace std;

float momentum(int m,int v){//momentum fonksiyonu girildi
	float itme,kutle,ilkhiz,sonhiz;
	ilkhiz=50;//ilk h�z de�eri
	cout<<"son h�z de�erini giriniz:"<<endl;//ekrana yazd�r
	cin>>sonhiz;//son h�z de�eri atand� d��ar�ya
	cout<<"k�tle de�erini giriniz:"<<endl;//ekrana yazd�r
	cin>>kutle;
	itme=(sonhiz-ilkhiz)*kutle;//itme-momentum formul�
	cout<<"itme-momentumu:"<<itme;//ekranda itme de�erini g�ster
	return itme;
	
	
}

int main(){
	setlocale(LC_ALL,"turkish");
	
	int a,b;
	momentum(a,b);//fonksiyon atand�.
	return 0;
	
	
	
}
